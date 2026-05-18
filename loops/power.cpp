#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter base :";
    cin>>a;
    cout<<"enter exponent :";
    cin>>b;
    int pow =1;
    for(int i=1 ; i<=b; i++ ){
        pow *= a;
    }
     cout<<a<<" raised to the power "<<b<<" is "<<pow;
           
    return 0;
}
