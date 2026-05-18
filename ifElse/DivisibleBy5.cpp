#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int a;
    cin>>a;
    if(a%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    }
   return 0;
}