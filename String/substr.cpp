#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string :";
    getline(cin,str);
    //abcdefgh
    int n=str.size();
    cout<<str.substr(n/2,n);
    return 0;
}
