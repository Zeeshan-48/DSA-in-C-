#include<iostream>
#include<string>
using namespace std;
int maze(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightway = maze(row,col-1);
    int downtway = maze(row-1,col);
    return rightway+downtway;
}
void printmaze(int row, int col,string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printmaze(row,col-1,s+'R');
    printmaze(row-1,col,s+'D');
}
int main(){
    int row,col;
    string s ="";
    cout<<"enter maze matrix "<<endl;;
    cout<<"enter row ";
    cin>>row;
    cout<<"enter column ";
    cin>>col;
    cout<<maze(row,col);
    cout<<endl;
    cout<<"the paths were:"<<endl;
    printmaze(row,col,s);
    return 0;
    
}