#include<iostream>
using namespace std;
int main(){
    int i=1;
    int j=1;
    do{
       j=1;
       do{ 
           cout<<i<<" "<<j<<endl;
           j++;
       }
          
    while(j<=3);
     i++;
     }
    while(i<=3);
    
    
}