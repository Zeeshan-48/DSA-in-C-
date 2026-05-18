#include<iostream>
using namespace std;
double area(double rad){
    double ar;
    ar = 3.14*rad*rad;
    return ar;
}
int main(){
    double radius;
    cout<<"enter the radius of the circle :";
    cin>>radius;
    cout<<"area of circle is :"<<area(radius);
    return 0;
}