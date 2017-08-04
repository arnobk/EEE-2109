#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[100];
    cin.getline(ch,100);
    int check = 0;
    for(int i=0;i<strlen(ch)/2;i++){
        if(ch[i]==ch[strlen(ch)-i-1]) check++;
    }
    if(check == strlen(ch)/2) cout<<"yes";
    else cout<<"no";
    cout<<endl;
}