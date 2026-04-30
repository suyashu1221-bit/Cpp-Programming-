#include<iostream>
using namespace std;

class Multiplication{
    public :

    int num1, num2;

    //Constructor
    Multiplication(){
        num1 = 5;
        num2 = 4;
    }

    //display function
    void display(){
        cout<<"Product ="<<num1 * num2<<endl;
    }

    //Virtual function 

    virtual void show(){
        cout<<"Multiplication"<<endl;
    }
};

class Mathoperation : public Multiplication {
    public :
    void show(){
        cout<<"MathOperation"<<endl;
    }
};

// template function

template <typename T>
T mul(T a, T b){
    return a*b;
}

// Main function
  
 int main(){

    Multiplication m;
    m.display();

    Mathoperation o;
    
    Multiplication* ptr = &o;
    ptr->show();

    // template function call

    cout<<"Multiplication ="<<mul(5,5)<<endl;

    return 0;
 }