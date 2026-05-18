#include<iostream>
using namespace std;
int main(){
    cout<<" enter a number ";
    int a;
    cin>>a;
    if(a%3==0){
        if(a%5==0){
        cout<<"thr number is divisible  by 5 and 3";
        }
        else{
            cout<<"condition not match";
        }
    }
    else{
       cout<<"condition not match";
        }
        return 0;
    }
    
