//0+3+8+15+24+...
#include<iostream>
using namespace std;
int main(){
    int dif = 3;
    int i=0;
    while(i<=100){
        i = i+dif;
        cout<<i<<" + ";
        dif+=2;
    }
}