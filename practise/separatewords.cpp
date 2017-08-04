#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[100];
    cin.getline(sentence,100);
    for(int i = 0; i<strlen(sentence);i++){
        if(char(sentence[i])==' '){
             cout<<endl;
             i++;
        }
        cout<<sentence[i];
    }
    cout<<endl;
}