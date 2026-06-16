#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,8,10,12,18,21,24};
    int n = 7;
    int key = 12;
    bool flag = false;
    for(int i=0;i<n;i++){
        flag = true;
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
    if(flag == false) cout<<"not in the array!";
    
    
}