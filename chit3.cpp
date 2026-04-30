
#include<iostream>
using namespace std;

// base class
class shopping{
   public:
   int price, quantity;

   // Constructor
   shopping(){
    price = 250;
    quantity = 25;
   }

   //finction display total cost
   void display(){
    cout<<"Total cost ="<<price *quantity<<endl;
   }

   //virtual function 
   virtual void show(){
     cout<<"Shopping"<<endl;
   }
};

// derived class
   
   class Onlineshopping : public shopping {
    public:
    void show(){
        cout<<"Online shopping"<<endl;
    }
};

  // Template function 

  template <typename T>
  T mul(T a, T b){
    return a *b;
  }

// main function 

int main()
{
    shopping s;
    s.display();
    s.show();

    // Objects of online shopping
    Onlineshopping o;
    shopping* ptr = &o;
    ptr->show();

    cout<<"Multiplication ="<<mul(5,5)<<endl;
 

    return 0;
}