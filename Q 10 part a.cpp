#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter enter the number of rows.";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*";
        }cout<<endl;
    }
 for(int i=0;i<=n;i++){
    for(int j=0;j<i;j++){
            cout<<"*";
        }
     for(int j=1;j<=n-i;j++){   
            cout<<"  ";
     }
        for(int k=1;k<=i;k++){
                cout<<"*";
            }   
    cout<<endl;
 }
}