#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=4;i++){
        int spc=4-i;
        for(int j=1;j<=spc;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        spc--;
        cout<<endl;
    }
}