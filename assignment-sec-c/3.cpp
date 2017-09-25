#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i=300;i<=500;i++){
        if(i%7==0)
            count++;
    }
    cout<<count<<endl;
}