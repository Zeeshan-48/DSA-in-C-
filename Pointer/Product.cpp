#include<iostream>
using namespace std;
int pro(int* a, int* b, int* c){
    *c = (*a)*(*b);
    return *c;
}
int main (){
    int a,b;
    int c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    pro(&a,&b,&c);
    cout<<c;
    return 0;
}