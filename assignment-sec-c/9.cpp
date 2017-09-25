#include<iostream>
using namespace std;
int main(){
    int a[3][4];
    
    for(int i=0;i<3;i++){
        cout<<"Enter 4 Quiz Marks of Student "<<i+1<<":";
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int qmax=a[0][0];

    for(int i=0;i<3;i++){
        if(qmax<a[i][0]){
            qmax = a[i][0];
        }
    }
    cout<<"Highest Mark of Quiz 1 is "<<qmax<<endl;
    cout<<"Student ";
    for(int i=0;i<3;i++){
        if(a[i][0]==qmax){
            cout<<i+1<<",";
        }
    }
    cout<<" got the highest mark in the exam"<<endl;;
}