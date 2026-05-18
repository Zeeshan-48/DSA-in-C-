#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements : ";
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<=size-1;i++){
        product = product*arr[i];
    }
    cout<<product;
    return 0;
}