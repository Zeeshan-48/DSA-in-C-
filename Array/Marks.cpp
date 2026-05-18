#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter students :";
    cin>>n;
    cout<<"enter marks :";
    int marks[n];
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
        for(int i=0;i<=n-1;i++){
            if(marks[i]<35){
                // print index i.e roll number
                cout<<i<<" ";
            }
        }
    return 0;
}