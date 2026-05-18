#include<iostream>
#include<vector>
using namespace std;
int main(){
//     vector<int> v(6);
//    // if size is given
//    for(int i=0;i<v.size();i++){
//     cin>>v[i];
//    }
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
   // if size is not given
   vector<int> vec;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vec.push_back(x);
   }
   for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
   }

    return 0;

}
