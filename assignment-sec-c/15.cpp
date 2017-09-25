#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100);
    for(int i=0;i<=strlen(a);i++){
        cout<<a[i];
        if(a[i]==' ') cout<<endl;
    }
    cout<<endl;
}