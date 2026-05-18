#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter row :";
    cin>>m;
    int n;
    cout<<"enter column :";
    cin>>n;
    int arr[m][n];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // //print
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //transpose
    for(int i=0 ; i<m ; i++){
        for(int j=i+1 ; j<n ; j++){
            //swap
            int temp = arr[i][j];
            arr [i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<endl;
    // //print
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //reverse
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n;j++){
            int k = 0;
            int l = m-1;
            while(k<=l){
                int temp = arr[i][k];
                arr[i][k] = arr[i][l];
                arr[i][l] = temp;
                i++;
                j--;
            }
         }
    }

     cout<<endl;

    //print
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}