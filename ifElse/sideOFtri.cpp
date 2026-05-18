#include<iostream>
using namespace std;
int main(){
    cout<<"enter the thre sides : ";
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"they are the sides of triangle";
    }
    else{
        cout<<"they are not the sides of triangle";
    }
    return 0;

}