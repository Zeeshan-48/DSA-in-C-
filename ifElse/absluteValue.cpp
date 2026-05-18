#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int a;
    cin>>a;
    if(a<=0){
        a =-a;
    }
    cout<<a;
   return 0;
}