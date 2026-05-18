#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// void swap(int i, int j, vector<int>& v){
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
//     return;
// }

// method 1
void sort01(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]==1 && v[j]==0){
            v[i] = 0;
            v[j] = 1;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
    }
    return;
}

//method 2
void sort011(vector<int>& v){
    int noo =0;
    int noz =0;
    // counting noo,noz
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    //filling element
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i] =0;
        else v[i] =1;
    }
    return;
}

int main(){
    vector<int> v;
    //input 
    int a;
    cout<<"enter the size :";
    cin>>a;
    cout<<"enter the elements :";
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    sort01(v);// method 1
    display(v);
    sort011(v);// method 2
    display(v);
    return 0;
}
