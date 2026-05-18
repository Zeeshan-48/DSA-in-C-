#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"enter thew size of an array : ";
    cin>>size;
    cout<<"enter the elements : ";
    int arr[size];
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<=size-1;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}