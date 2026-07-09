#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,5,4,2,1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // sort
    int i=0;
    while(i<n){
        int currentIdx = arr[i]-1;
        if(i==currentIdx) i++;
        else swap(arr[i],arr[currentIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}