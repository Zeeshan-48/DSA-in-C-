#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,6,7,9};
    int n = 7;
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }        
}