#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter anumber :";
    cin>>n;

    //100 97 94 91.....
    int a =100;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a-3;
    }
    return 0;
}