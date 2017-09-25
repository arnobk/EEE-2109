#include<iostream>
using namespace std;
int main(){
    long num;
    cin>>num;
    short digit;
    while(num>0){
        digit = num%10;
        if(digit==5)
            cout<<0;
        else   
            cout<<digit;
        num /=10;
    }
    cout<<endl;
}