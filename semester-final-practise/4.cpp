//factorials numbers until 1000
#include<iostream>
using namespace std;
long fact(int n){
    long fac = 1;
    for(int i=n;i>1;i--)
        fac *=i;
    return fac;
}
int main(){
    for(int i = 0;;i++){
        long test = fact(i);
        if(test>1000) break;
        cout<<test<<" ";
    }
    cout<<endl;
}