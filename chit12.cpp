#include<iostream>
using namespace std;

class petrol{
    public :
    int litres, priceperlitre;

    petrol(){
        litres = 5;
        priceperlitre = 100;
    }

    void display(){
        cout<<"Total cost ="<<litres * priceperlitre<<endl;
    }

    virtual void show(){
        cout<<"Fuel"<<endl;
    }
};

class diesel : public petrol{
    public:
    void show(){
      cout<<"Diesel fuel"<<endl;
    }
};

// template function 
 template <typename T>
 T minimum(T a, T b){
    if( a<b)
    return a;
    else 
    return b;
 }

 // main function
  int main(){

    petrol p;
    p.display();

    diesel d;
    petrol* ptr = &d;
    ptr->show();

    // temlate function call

    cout<<"Minimum :"<<minimum(5,50)<<endl;

    return 0;


  }