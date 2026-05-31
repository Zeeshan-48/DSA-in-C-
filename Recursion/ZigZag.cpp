#include<iostream>
using namespace std;
void zigzag(int a){
    if(a==0) return;
    cout<<a;
    zigzag(a-1);
    cout<<a;
    zigzag(a-1);
    cout<<a;
}
int main(){
    int a = 2;
    zigzag(a);
}