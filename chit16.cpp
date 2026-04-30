#include<iostream>
using namespace std;

class division{
    public:

    int num1, num2;

    //Constructor
    division(){

        num1 = 20;
        num2 = 5;
    }
    
    //display function 
    void display(){
        cout<<"Division result ="<<num1/num2<<endl;
    }

    //virtual function 

    virtual void show(){
        cout<<"division"<<endl;
    }
};

class Calculator : public division {
    public:
    void show(){
        cout<<"Calculator"<<endl;
    }
};

// Template function 
  template <typename T>
  T divi(T a, T b){
    if ( b == 0 ){
        cout<<"Cannot divide by zero"<<endl;
        return 0;
    }

    return a/b;
  }

  // Main function 
  int main(){
     
    division d;
    d.display();
    
    Calculator c;

    division* ptr = &c;
    ptr->show();

    //Template function call

    cout<<"Division ="<<divi(10,5)<<endl;

    return 0;
  }