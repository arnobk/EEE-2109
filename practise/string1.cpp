#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[100];
    cin.getline(ch,100);
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==' ' || ch[i]=='\n'){
            cout<<' ';
            i++;
            cout<<char(toupper(ch[i]));
            }
        else if(i==0)  cout<<char(toupper(ch[i]));
        
        else{
            cout<<ch[i];
        }
    }
    cout<<endl;
}