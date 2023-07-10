#include <iostream>
using namespace std;
int main() {
    int n,r,f;
    cout<<"Enter any number : ";
    cin>>n;
    
    for(int i=0;i<10;i++){
        f=0;
        cout<<"The frequency of the number "<<i<<"is :";
        for(int j=n;j>0;j=j/10){
        r=j%10;
        if(r==i){
           f++;
        }
        }cout<<f<<endl;
    }
}