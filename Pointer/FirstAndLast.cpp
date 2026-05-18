#include<iostream>
using namespace std;
void show(int n, int *ptr1 , int *ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
}
int main(){
    int n;
    cin>>n;
    int firstdigi;
    int lastdigi;
    int* ptr1 =&firstdigi;
    int* ptr2 =&lastdigi;
    show( n , ptr1 , ptr2);
    cout<<firstdigi<<" "<<lastdigi;
    return 0;
}