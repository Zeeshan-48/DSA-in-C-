#include<iostream>
using namespace std;
int fact(int n){
    //base case -> recursion kab rukega.
    if(n==1 || n==0) return 1;
    // recursive call -> bar bar khud ko call krega.
    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
    return 0;
}