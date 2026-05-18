#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int len = s.size();
    reverse(s.begin(),s.begin()+len/2);
    cout<<s<<endl;

    return 0;
}
