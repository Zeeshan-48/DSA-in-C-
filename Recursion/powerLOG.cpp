
#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==1) return a;
    int ans;
    if(b%2==0){
        ans = power(a,b/2);
        return ans*ans;
    }
    if(b%2!=0){
        ans = power(a,b/2);
        return ans*ans*a;
    }
}
int main(){
    int a,b;
    cout<<"enter the base ";
    cin>>a;
    cout<<"enter the exponent ";
    cin>>b;
    cout<<a<<" raised to power "<<b<<" is "<<power(a,b);
    return 0;
}