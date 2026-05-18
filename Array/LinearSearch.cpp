#include<iostream> 
using namespace std;
int main(){
    int size;
    cout<<"enter thr size of an array : ";
    cin>>size;
    int arr[size];

    //input
    cout<<"enter the elements :";
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }

    // finding element
    int x;
    cout<<"enter the element you wanna find :";
    cin>>x;
    
    //search
    bool flag = false;
    for(int i=0;i<=size-1;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"element is found !";
    }
    else {
        cout<<"element is not found !";
    }
    return 0;
}