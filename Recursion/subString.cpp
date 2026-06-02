#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printStr(string ans, string original, vector<string>& v, int idx){
    char ch = original[idx];
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    printStr(ans+ch,original,v,idx+1);
    printStr(ans,original,v,idx+1);

}
int main(){
    string str = "abc";
    vector<string> v;
    printStr("",str,v,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}