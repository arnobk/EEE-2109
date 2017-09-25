#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter a and b of complex number (a+ib): ";
    cin>>a>>b;
    if(b==0){
        cout<<"REAL NUMBER"<<endl;
    } else{
        cout<<"IMAGINARY NUMBER"<<endl;
    }
}