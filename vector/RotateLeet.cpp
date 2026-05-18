#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int>& v){
    while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
    }
}
int main(){
    vector<int> v;
    int m;
    cout<<"enter the size :";
    cin>>m;
    cout<<"enter the elements :";
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    int k;
    cout<<"enter k :";
    cin>>k;
    int n = v.size();
    if(k>n){
        k = k%n;
    }
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
    return 0;
}