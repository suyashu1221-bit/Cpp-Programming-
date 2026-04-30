#include<iostream>
using namespace std;

class Minimumvalue{
    public:

    int num1, num2;

    Minimumvalue(){
        num1 = 25;
        num2 = 15;
    }
    
    void display(){
        cout<<"Num 1 ="<<num1<<endl;
        cout<<"Num 2 ="<<num2<<endl;
    }

    virtual void show(){
        cout<<"Minimum value "<<endl;
    }
} ;

class Comparemin : public Minimumvalue{
    public :
    void show(){
        cout<<"Compare minimum"<<endl;
    }
};

template <typename T>
T minimum(T a, T b){
    if( a<b )
    return a;
    else 
    return b;
}

int main(){
    
    Minimumvalue m;
    m.display();

    Comparemin c;
    c.show();

    cout<<"Minimum ="<<minimum(45,5)<<endl;

    return 0;
}
