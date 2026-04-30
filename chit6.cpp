#include<iostream>
using namespace std;

// base class
class Employeebonus{
    public:

    int salary, bonus;

    //Constructor
    public:
    Employeebonus(){
        salary = 75000;
        bonus = 15000;
    }

    void display(){
        cout<<"Total salary ="<<salary + bonus<<endl;
    }

    virtual void show(){
        cout<<"bonus "<<endl;
    }
};

class Managerbonus : public Employeebonus{
    public :
     void show(){
        cout<<"Manager bonus "<<endl;
     }
};

// temmplate finction 
  template <typename T>
  T minimum(T a, T b){
    if (a<b)
    return a;
    else 
    return b;
  }

  // main function 
   
  int main()
  {
     Employeebonus e;
     e.display();

     Managerbonus m;

     Employeebonus* ptr = &m;
     ptr->show();


     // template function call 
       cout<<"Minimum of two integers :"<<minimum(5,25)<<endl;

       return 0;
  }