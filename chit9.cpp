#include<iostream>
using namespace std;

class bankintrest{
    public :

    int principle, rate;

    // constructor
    bankintrest(){
        
        principle = 1000;
        rate = 5;
    }
     
    void display(){
        cout<<"Calculated interest ="<<(principle*rate)/100<<endl;
    }

    virtual void show(){
        cout<<"Bank Intrest"<<endl;
    }
};

class loan : public bankintrest{
    public :
    void show(){
        cout<<"Loan Intrest"<<endl;
    }
};

// Template function 

template <typename T>
T mul(T a,T b){
    return a*b;
}

// main function 

int main(){

    bankintrest b;
    b.display();

    loan l;
    bankintrest* ptr = &l;
    ptr->show();

    // function template call
    cout<<"Multiplication :"<<mul(5,5)<<endl;

    return 0;
    

}