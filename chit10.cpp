#include<iostream>
using namespace std;

class Distance{
    public:
    int d1, d2;

    //Constructor
    Distance(){
        d1= 10;
        d2= 20;
    }
      // display function 
      void display(){
        cout<<"Total distance ="<<d1+d2<<endl;
      }

      virtual void show(){
        cout<<"Distance "<<endl;
      }
};

class travel : public Distance{
    public :
    void show(){
        cout<<"Travel distance"<<endl;
    } 
};

  // template function
  template <typename T>
  T divide(T a, T b){
    return a/b;
}

int main(){
    Distance d;
    d.display();

    travel t;
    Distance* ptr = &t;
    ptr->show();

    cout<<"Division ="<<divide(25,5)<<endl;

    return 0;
}
  