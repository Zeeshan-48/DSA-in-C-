#include<iostream>
using namespace std;
int main(){
    float pi , r, h , vol;
    pi = 3.14;
    cout<<"enter your radius :";
    cin>>r;
    cout<<"enter your height :";
    cin>>h;
    vol = pi*r*r*h;
    cout<<"volume is :"<<vol;
    return 0;

}