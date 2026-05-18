#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2 ){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> res(n1+n2);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n1-1 && j<=n2-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
        // remaining element
        if(i==n1){
            while(j<=n2-1){
                res[k]=arr2[j];
                j++;
                k++;
            }
         }
        if(j==n2){
                while(i<=n1-1){
                res[k]=arr1[i];
                i++;
                k++;
            }
        }
     return res;
}

int main(){
    // 1st array
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
     for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // 2nd array
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
     for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    // resultant array
    vector<int> v;
    v = merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}