#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}



int main(){

    int x, y;

    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Addition ="<<add(x, y)<<endl;

    return 0;
}