#include<iostream>
using namespace std;

class Shoppingcart{
    public:

    int itemcount;
    int price;

    //Constructor
    Shoppingcart(){
        itemcount = 3;
        price = 200;
    }

    //Display function

    void display(){
        cout<<"Total cost ="<< itemcount * price <<endl;
    }

    //Virtual function 

    virtual void show(){
        cout<<"Cart"<<endl;
    }
};

class Onlinecart : public Shoppingcart{
    public:
    void show(){
        cout<<"Online cart "<<endl;
    }
};

// template function 

template <typename T>
T sub(T a, T b){
    return a - b;
}

// mainfunction 

int main(){  

    Shoppingcart s;
    s.display();
    
    Onlinecart o;
    Shoppingcart* ptr = &o;
    ptr->show();

    //Template function call

    cout<<"Subtraction ="<<sub(26,1)<<endl;

    return 0;

}

