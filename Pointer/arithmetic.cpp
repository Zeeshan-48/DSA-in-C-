#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int* ptr = &a; //0x61ff08
    //  address me 4 badh gya kyu ki int typr hain
    // cout<<++ptr; //0x61ff0c
    // return 0;

    bool flag =true;
    bool* ptr = &flag; //0x61ff0b
    //address me 1 badh gya kyu ki bool typr hain
    cout<<++ptr; //0x61ff0c
}