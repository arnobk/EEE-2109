#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char word[100];
    while(*word){
        cin>>word;
        if(*word){
            for(int i=strlen(word);i>=0;i--){
                cout<<word[i];
            }
            cout<<" ";
        }     
    }
}