#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    int word = 1;
    cin.getline(a,100);
    for(int i=0;i<=100;i++){
        if(a[i]==' ')
            word++;
    }
    cout<<word<<endl;
}