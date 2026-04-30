#include<iostream>
using namespace std;

class Maximumvalue{
    public: 
    int num1, num2;

    //Constructor
    Maximumvalue(){
        num1 = 30;
        num2 = 50;
    }
    void display(){

        cout<<"Num 1 ="<<num1<<endl;
        cout<<"Num 2 ="<<num2<<endl;
    }

    virtual void show(){
        cout<<"Maximum value"<<endl;
    }
};

class Compare : public Maximumvalue{
    public :
    void show(){
        cout<<"Compare values"<<endl;
    }
};

template <typename T>
T maximum(T a, T b){
    if( a>b )
    return a;
    else 
    return b;
}

int main(){

    Maximumvalue m;
    m.display();

    Compare c;
    
    Maximumvalue* ptr = &c;
    ptr->show();

    cout<<"Maximum ="<<maximum(25,5)<<endl;

    return 0;
}
