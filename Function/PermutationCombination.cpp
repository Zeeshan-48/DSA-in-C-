#include<iostream>
using namespace std;
//factorial function
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
//combination function
int combination(int n , int r){
    int combi;
    combi = fact(n)/(fact(r)*fact(n-r));
    return combi;
}
//premutation function
int permutation(int n , int r){
    int permu;
    permu = fact(n)/fact(n-r);
}
//main function
int main(){
    int n , r;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter r :";
    cin>>r;
    cout<<combination(n,r)<<endl;;
    // int combination;
    // combination = fact(n)/(fact(r)*fact(n-r));
    // cout<<combination<<endl;
    // int permutation;
    // permutation = fact(n)/fact(n-r);
    // cout<<permutation;
    cout<<permutation(n,r)<<endl;
}