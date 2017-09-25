#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int min=a[0];
    for(int i=0;i<5;i++){
        if(min>a[i])
            min = a[i];
    }
    cout<<"Minimum Number: "<<min<<endl;
    cout<<"Minimum Number(s) at position: ";
    for(int i=0;i<5;i++){
        if(a[i]==min)
            cout<<i+1<<" ";
    }
    cout<<endl;
}