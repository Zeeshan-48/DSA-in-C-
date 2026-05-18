#include<iostream>
using namespace std;
int main(){
    char ch , sh;
    cout<<"enter your fisrt character ";
    cin>>ch;
    cout<<"enter your second character ";
    cin>>sh;
    int c = (int)ch;
    int s = (int)sh;
    if(c>s){
        cout<<"difference is :"<<c-s;
    }
    else{
        cout<<"difference is :"<<s-c;
    }
    

    return 0;
}