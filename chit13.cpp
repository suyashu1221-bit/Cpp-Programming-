#include<iostream>
using namespace std;

class Exammarks{
    public:
    int marks1, marks2;

    //Constructor 
    public:

    Exammarks(){
        marks1 = 70;
        marks2 = 80;
    }

    void display(){
        cout<<"Total marks ="<<marks1 + marks2<<endl;
    }
      // virtual function 
      virtual void show(){
        cout<<"Marks"<<endl;
      }
    
};

class Finalmarks : public Exammarks{
    public: 

    void show(){
    cout<<"Final marks"<<endl;
    }
};

  //template function 
  template <typename T>
  T add(T a, T b){
    return a + b;
  }

  // Main function 
  int main(){

     Exammarks e;
     e.display();

     Finalmarks f;
     
     Exammarks* ptr = &f;
     ptr->show();

     //Template function call 

     cout<<"Addition ="<<add(5,20)<<endl;

     return 0;
  }