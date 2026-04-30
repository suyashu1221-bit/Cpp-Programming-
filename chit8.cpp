#include<iostream>
using namespace std;

 class ticketbooking{
    public:

    int tickets, price;
    
    //Constructor
    public:
    ticketbooking(){
        tickets = 2;
        price   =100;
    }

    void display(){
        cout<<"Total cost ="<<tickets*price<<endl;
    }

    virtual void show(){
        cout<<"Ticketbooking"<<endl;
    }
 };

 class Onlinebooking : public ticketbooking{
     public:
    void show(){
        cout<<"Online booking"<<endl;
    }
 };

 // template function 

 template <typename T>
 T sub(T a, T b){
    return a - b;
 }

 int main(){

    ticketbooking t;
    t. display();

    Onlinebooking o;
    
    ticketbooking* ptr = &o;
    ptr->show();

    // template function call 

    cout<<"Subtration ="<<sub(25,1)<<endl;

    return 0;
 }

