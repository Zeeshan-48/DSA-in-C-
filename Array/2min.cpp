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
    int min = INT_MAX;
    for(int i=0;i<=size-1;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int min2 = INT_MAX;
    for(int i=0;i<=size-1;i++){
        if(arr[i]!=min && arr[i]<min2){
            min2 = arr[i];
        }
    }
    cout<<min<<endl;
    cout<<min2;
    return 0;
}