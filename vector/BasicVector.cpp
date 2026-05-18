#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //inserting elements
    v.push_back(5);
    v.push_back(87);
    v.push_back(98);
    v.push_back(77);
    // output
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return 0;
}