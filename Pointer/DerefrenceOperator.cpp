#include<iostream>
using namespace std;
int main(){

    //intiger
    // int a =5;
    // int* p = &a;
    // cout<<p;

    //character
    // char ch='z';
    // char* p2 = &ch;
    // cout<<p2;

    //updation
    int  a=5;
    int* p =&a;
    cout<<p<<endl;
    *p =10;
    cout<<a;

}