#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"enter target :";
    cin>>x;
    int n;
    cout<<"enter the number of elements :";
    cin>>n;
    for(int i=0;i<v.size();i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<v[i]<<","<<v[j]<<")";
        }
    }
    return 0;
}
