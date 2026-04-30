#include<iostream>
using namespace std;

class Temperature{
    public:

    int celsius;

    //Constructor
    Temperature(){
        celsius = 30;
    }

    void display(){
      cout<<"Temperature in fahrenheit"<<(celsius*9.0/5)+32<<endl;
    }

    virtual void show(){
        cout<<"Temperature"<<endl;

    }
};

class Weather : public Temperature {
    public:
    void show(){
        cout<<"Wheather Report "<<endl;
    }
};

// function template 
  template <typename T>
  T add(T a, T b){
    return a + b;
  }
  
  //main function
  int main(){
    Temperature t;
    t.display();
    

    Weather w;
    
    Temperature* ptr = &w;
    ptr->show();
  

  // template function call 

  cout<<"Addition :"<<add(25,1)<<endl;

  return 0;
}


