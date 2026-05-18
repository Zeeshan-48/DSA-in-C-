#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a =j+64; // for small alphabet (char) (j+64)
            cout<<(char)a;
        }
        cout<<endl;
    }
    return 0;
}