#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char word[20];
    cin.getline(word,20);
    for(int i=0;i<strlen(word);i++){
        if(word[i]!=word[strlen(word)-i-1]){
            cout<<"NOT PALLINDROME"<<endl;
               return 0;
        }
    }
    cout<<"PALLINDROME"<<endl;
}