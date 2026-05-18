#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter anumber :";
    cin>>n;

    //2 4 6 8 10.....
    int a =2;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a+2;
    }
    return 0;
}