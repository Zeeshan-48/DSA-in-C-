#include<iostream>
#include<string>
using namespace std;
// recursion method
bool isPalindrome(string str, int i, int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    return isPalindrome(str,i+1,j-1);
    
}
int main(){
    string str = "racecar";
    cout<<isPalindrome(str,0,str.length()-1);

    // // iterative method
    // int i=0; int j=str.length()-1;
    // bool flag = true;
    // while(i<=j){
    //    if(str[i]!=str[j]){
    //     flag = false;
    //     break;
    //    }
    //     i++;
    //     j--;
    // }
    // cout<<flag;
}