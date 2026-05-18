#include<iostream>
#include<string>
using namespace std;
int main(){
string s = "zeeshan";
int count = 0;
for (int i = 0; i < (int)s.length(); i++) {
    char c = s[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        count++;
    }
}
cout << count;

return 0;
}
