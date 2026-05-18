#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>65 && ascii<90) || (ascii>97 && ascii<122)){
        cout<<"characher is an alphabeet";
    }
    else{
        cout<<"characher is not an alphabeet";
    }
    return 0;
}