#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,6,7,9};
    int n = 7;
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i]){
    //         cout<<i;
    //         break;
    //     }
    // }
    int lo=0;
    int hi=n;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) lo = mid+1;
        else{
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;
}