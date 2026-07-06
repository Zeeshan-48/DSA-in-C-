#include<iostream>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotElement = arr[startIdx];
    int count = 0;
    for(int i=startIdx+1;i<=endIdx;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    int pivotIdx = startIdx + count;
    swap(arr[startIdx],arr[pivotIdx]);

    int i = startIdx;
    int j = endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<arr[pivotIdx]) i++;
        if(arr[j]>arr[pivotIdx]) j--;
        if(arr[i]>arr[pivotIdx] && arr[j]<=arr[pivotIdx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotIdx;
}
void quickSort(int arr[], int startIdx, int endIdx){
    if(startIdx>=endIdx) return;
    int pivotIdx = partition(arr, startIdx, endIdx);
    quickSort(arr, startIdx, pivotIdx-1);
    quickSort(arr, pivotIdx+1, endIdx);
}
int main(){
    int arr[]={5,2,3,7,8,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}