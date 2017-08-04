#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[80];
    while(*ch){
        cin>>ch;
        if(*ch){
            for(int i = strlen(ch)-1;i>=0;i--){
                cout<<ch[i];
            }
            cout<<' ';
        }  
    }
}