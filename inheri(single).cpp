#include<iostream>
using namespace std;
class vehicle
{
    public:vehicle (){
        cout<<"this is a vehicle\n";
    }
};


class car : public vehicle  {
    public:
    car () {
    
    
        cout<<"thus vehicle is car ";
    };

    };
    int main ()
    {
        car obj;
        return 0;

    }

