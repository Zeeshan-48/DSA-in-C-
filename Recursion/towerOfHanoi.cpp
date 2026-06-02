#include<iostream>
#include<algorithm>
using namespace std;
//hanoi solution
void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
//power
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n;
    cout<<"enter number of disk ";
    cin>>n;
    int pow = power(2,n);
    cout<<"number of moves are :"<<pow-1<<endl;
    hanoi(n,'A','B','C');
}