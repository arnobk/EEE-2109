#include<iostream>
#include<cstring>
using namespace std;
int main(){
    /*char word[100];
    while(*word){
        cin.getline(word,80,',');
        if(*word) cout<<word<<endl;
    
    char ch;
    int count=0;
    while(cin.get(ch)){
        if(ch=='a') 
            ++count;
        if(ch=='\n') 
            break;
    }
    cout<<"a occured "<<count<<" times.\n";
    }*/

    char ch,pre = '\0';
    while(cin.get(ch)){
        if(pre==' ' || pre=='\n')
            cout.put(toupper(ch));
        else cout.put(ch);
        pre = ch;
    }
    
}