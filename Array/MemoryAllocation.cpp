#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,5,7,9};
    cout<<arr<<endl;//address of 1st element-> 1st byte

    //continous memory allocation
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    return 0;
}