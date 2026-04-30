#include<iostream>
using namespace std;

//base class
class hotelbill{
    public:
    int days;
    int rentperday;

    hotelbill(){
        days = 2;
        rentperday = 1000;
    }

    void display(){
        cout<<"Total bill"<<days*rentperday<<endl;
    }

    virtual void show()
    {
        cout<<"hotel bill"<<endl;
    }
};

class luxuryroom : public hotelbill{
    public :
    void show(){
        cout<<"Luxury room bill"<<endl;
    }
};

// template function 
    template <typename T>
    T maximum(T a, T b){
        if( a > b)
        return a;
        else 
        return b;
    }
  
    //main function

    int main(){

        hotelbill h;
        h.display();

        luxuryroom l;
        hotelbill* ptr = &l;
        ptr->show();

        cout<<"Maximum :"<<maximum(32,2)<<endl;

        return 0;
    }