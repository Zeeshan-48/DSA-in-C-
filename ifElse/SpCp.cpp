#include<iostream>
using namespace std;
int main(){
    cout<<"enter selling price ";
    int sp;
    cin>>sp;
    cout<<"enter cost price ";
    int cp;
    cin>>cp;
    if(sp>cp){
        cout<<"profit is:"<<sp-cp;
    }
    if(cp>sp){
        cout<<"loss is:"<<cp-sp;
    }
    else{
        cout<<"no profit , no loss";

    }
    
    return 0;
}