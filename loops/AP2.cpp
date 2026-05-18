#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter anumber :";
    cin>>n;

    //1 3 5 7 9.....
    int a =1;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a+2;
    }
    return 0;
}