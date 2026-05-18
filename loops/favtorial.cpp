#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entyer a number : ";
    cin>>n;
    int facto = 1;
    for(int i=1; i<=n; i++){
        facto*=i;
    }
    cout<<facto;
    return 0;
}