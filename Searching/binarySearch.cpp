#include<iostream>
#include<algorithm>
using namespace std;
int search(int arr[] ,int target ,int size){
int lo=0;
int hi=size-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid-1;
    }
    return -1;
}
int main(){
    int arr[] = {2,5,8,14,17,23,27,80};
    int target = 27;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,target,size);

}