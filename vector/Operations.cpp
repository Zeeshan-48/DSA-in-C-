#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //push_back() used to insert element
    v.push_back(6);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //size() is used to know the size of vector
    cout<<"size is :"<<v.size()<<endl;

    // capacity() is used to know the capacity of vector
    cout<<"capacity is :"<<v.capacity()<<endl;

    //pop_back() is used to delete the element from back
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

     //size() is used to know the size of vector
    cout<<"size is :"<<v.size()<<endl;

    // capacity() is used to know the capacity of vector
    cout<<"capacity is :"<<v.capacity()<<endl;
    return 0;
}