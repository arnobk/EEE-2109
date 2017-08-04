#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[] = "A quick brown fox jumps over the lazy dog. A quick brown fox jumps over the lazy dog.";
    for(int i = 0;i<strlen(a);i++){
        if(char(a[i])==' ') i++;
        cout<<a[i];
    }

}