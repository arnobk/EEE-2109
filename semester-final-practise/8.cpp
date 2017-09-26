/*
   1
  123
 12345
1234567
 12345
  123
   1
   */
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=7-2*i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}