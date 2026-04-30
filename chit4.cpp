#include<iostream>
using namespace std;

// base class

class recharge{
    public:
    long long number;
    int amount;

    // constructor

    recharge(){
       number = 9226122121;
       amount = 349;
    }

    // display function 
    void display(){
        cout<<"Mobile number = "<<number<<endl;
        cout<<"Recharge amount ="<<amount<<endl;
    }
    
    // virtual function 
    virtual void show(){
        cout<<"Recharge"<<endl;
    }

};

// derived class 

class specialrecharge : public recharge {
    public :
    void show() override {
        cout<<"special recharge "<<endl;
    }
};

//Template function 

template <typename T>
T divide(T a, T b){
    return a/b;
}

// main function

int main(){
    // Objects of recharge 
    recharge r;
    r.display();
    

    // Objects of special recharge 
    specialrecharge s;
    recharge* ptr = &s;
    ptr->show();

    //Template function call

    cout<<"Division ="<<divide(25,5)<<endl;

    return 0;
}
