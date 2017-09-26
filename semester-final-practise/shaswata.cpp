#include<iostream>
using namespace std;
int main(){
    int a = 2;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++,a+=3){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}