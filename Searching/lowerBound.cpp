#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,8,10,12,18,21,24};
    int n = 7;
    int key = 17;
    bool flag = false;
    int lo=0;
    int hi=n;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==key){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<key) lo = mid+1;
        else hi = mid-1;
    }
    if(flag == false){
        cout<<arr[hi];
    }
    
}