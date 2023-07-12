#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
  //inverted pyramid//
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"* ";
        }cout<<endl;
    }

    //right angle triangle//

    for(int i=1;i<=n;i++){
         for(int k=1;k<i;k++){
            cout<<"* ";
        }
       cout<<endl;
    }

    //inverted right angle triangle//

     for(int i=1;i<=n;i++){
         for(int k=1;k<=n-i+1;k++){
            cout<<"* ";
        }
       cout<<endl;
    }

   
}