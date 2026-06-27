#include<iostream>
#include<vector>
using namespace std;
void moveZero(vector<int> &v){
    int i=0;
    int j=0;
    while(i<v.size()){
        if(v[i] != 0){
            swap(v[i],v[j]);
            i++;
            j++;
        }
        else i++;
    }
}
int main(){
    vector<int> v = {1,0,7,5,0,3,0};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    moveZero(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}