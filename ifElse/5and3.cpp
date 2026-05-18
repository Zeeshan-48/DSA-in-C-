#include<iostream>
using namespace std;
int main(){
    cout<<" enter a number ";
    int a;
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<"thr number is divisible  by 5 and 3";
    }
    else{
        cout<<"thr number is not divisible  by 5 and 3";
    }
    return 0;
}