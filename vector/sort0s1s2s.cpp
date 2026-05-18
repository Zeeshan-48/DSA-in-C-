#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int n = v.size();
    // two pass
    // int noz = 0;
    // int noo = 0;
    // int notw = 0;
    // //count
    // for(int i=0;i<n;i++){
    //    if(v[i]==0){
    //     noz++;
    //    } 
    //    else if(v[i]==1){
    //     noo++;
    //    } 
    //    else notw++;
    // }
    // //fill
    // for(int i=0;i<n;i++){
    //     if(i<noz){
    //         v[i]=0;
    //     }
    //     else if(i<noz+noo){
    //         v[i]=1;
    //     }
    //     else v[i]=2;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // one pass {dutch flag algo.}
    int hi=n-1;
    int lo=0;
    int mid=0;
    while(mid<=hi){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp1 = v[mid];
            v[mid] = v[lo];
            v[lo] = temp1;
            mid++;
            lo++;
        }
        else mid++; 
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}