#include<iostream>
using namespace std;

class libraryfine{
    public:

    int latedays;
    int fineperday;

    //Constructor 
    public:

    libraryfine(){
        latedays = 25;
        fineperday = 15;
    }

    void display(){
        cout<<"Total fine :"<<latedays*fineperday<<endl;
    }

    virtual void show(){
        cout<<"Late fees"<<endl;
    }
};

class studentfine : public libraryfine {
    public:
    void show(){
        cout<<"Student fine"<<endl;
    }
};

   //Template function 
   template <typename T>
   T maximum(T a,T b){
    if(a>b)
    return a;
    else 
    return b;
   } 

   // main function 

   int main()
   {
    libraryfine l;
    l.display();

    studentfine s;
    libraryfine* ptr = &s;
    ptr->show();

    // template function call 

    cout<<"Maximum of tow numbers :"<<maximum(50,20)<<endl;

    return 0;
   }