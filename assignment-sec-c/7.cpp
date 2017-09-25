#include<iostream>
using namespace std;
int main(){
    long bin;
    int dec=0,base=1,digit;
    cin>>bin;
    while(bin>0){
        digit = bin%10;
        dec+=base*digit;
        bin/=10;
        base*=2;
    }
    cout<<dec<<endl;
}