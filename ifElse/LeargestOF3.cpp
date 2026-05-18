#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number :";
    cin>>a;
     cout<<"enter second number :";
    cin>>b;
     cout<<"enter third number :";
    cin>>c;
    if (a>b && a>c){
        cout<<a<<" is largest";
    }
    if (b>a && b>c){
        cout<<b<<" is largest";
    } 
    if (c>a && c>b){
        cout<<c<<" is largest";
    }
    else{
        cout<<"enter distinct number";
    }
    return 0;
}