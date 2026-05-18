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
    int sum=0;
    for(int i=0;i<=size-1;i++){
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}