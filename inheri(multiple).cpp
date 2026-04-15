#include<iostream>
using namespace std;
class landvehicle 
{
    public :
    void landinfo ()
    {
        cout<<"this is land vehicle ";
    }

    };
    class watervehicle {
        public : void warervehicle ()
        {
            cout<<"this is water vehicle ";

        }
    };
        class  amphibiousvehicle : public landvehicle,public watervehicle 
        {
        
        
            public :amphibiousvehicle ()
            {
                cout<<"thus is amphibious vehicle\n ";

            }
        };
        int main ()
        {
            amphibiousvehicle obj;
            
            obj.landinfo();
            return 0;

        }

    
