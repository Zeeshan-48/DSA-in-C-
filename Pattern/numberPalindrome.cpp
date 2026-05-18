#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of row :";
    cin>>n;
    for(int i=1;i<=n;i++){
         //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //number
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        //flipped number
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }
    return 0;
}

