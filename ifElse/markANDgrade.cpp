#include <iostream>
using namespace std;
int main(){
    int mark;
    cout<<"enter mark between 0-100 ";
    cin>>mark;
    if(mark<=100){
    if(mark>=91){
        cout<<"excelent";
    }
    else{
        if(mark>=81){
            cout<<"very good";
        }
        else{
            if(mark>=71){
                cout<<"good";
            }
            else{
                if(mark>=61){
                    cout<<"can do better";
                }
                else{
                    if(mark>=51){
                        cout<<"average";
                    }
                    else{
                        if(mark>=41){
                            cout<<"below average";
                        }
                        else{
                            cout<<"fail";
                        }
                    }
                }
            }
        }
    }
}
else{
    cout<<"please enter valid mark";
}
    return 0;
}