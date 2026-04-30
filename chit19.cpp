#include<iostream>
using namespace std;

class Sum{

public:
    int num1, num2;

    Sum(){
        num1 = 10;
        num2 = 20;
    }
     void display(){
        cout<<"Addition result "<<num1+num2<<endl;
     }

     virtual void show(){
        cout<<"Sum"<<endl;
     }
};

class Addition : public Sum{
    public:

    void show(){
        cout<<"Addition "<<endl;
    }
};

template <typename T>
T add(T a, T b ){
    return a + b;
}

int main(){
    Sum s;
    s.display();

    Addition a;
    a.show();

    cout<<"Addition ="<<add(20,5)<<endl;

    return 0;
}
