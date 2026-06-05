#include<iostream>
using namespace std;

// iterative method
int hcf2(int a, int b){
    for(int i=min(a,b);i>2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}

// recursive method
int hcf(int a, int b){
    if(a==0) return b;
    return hcf(b%a,a);
}

int main(){
    int a = 27;
    int b = 45;
    // cout<<hcf2(a,b);
    cout<<hcf(a,b);
}