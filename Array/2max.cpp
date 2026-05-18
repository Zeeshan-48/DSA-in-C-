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
    int max2 = INT_MIN;
    for(int i=0;i<=size-1;i++){
        if(arr[i]!=max && arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<max2;
    return 0;
}