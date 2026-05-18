#include<iostream>
using namespace std;
//method2
int swap(int a, int b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b;
}
int main(){
    int a, b ;
    cin>>a>>b;
    //method 1
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    //cout<<a<<" "<<b;
    swap(a,b);
    return 0;
}