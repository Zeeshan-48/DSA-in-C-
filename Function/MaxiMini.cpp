#include<iostream>
using namespace std;
//minimum
int mini(int x , int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
//maximum
int maxi(int x , int y){
    int a;
    if(x>y) a=x;
    else a=y;
    return a;
}
int main(){
    int x , y;
    cin>>x>>y;
    cout<<"minumum is :"<<mini(x,y)<<endl;
    cout<<"maximum is :"<<maxi(x,y);
}