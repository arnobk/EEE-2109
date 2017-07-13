#include<iostream>
using namespace std;
int notes(int n, int& n1000,int& n500,int& n100){
    if(n<0){
        cout<<"Ammount can not be negative."<<endl;
        return 0;
    }
    if(n>=1 && n<=1000) n1000 = 0;
    if(n>=1001 && n<=3000) n1000 = 1;
    if(n>=3001 && n<=5000) n1000 = 3;
    if(n>=5001 && n<=10000) n1000 = 5;
    if(n>=10001 && n<=15000) n1000 = 10;
    if(n>=15001 && n<=20000) n1000 = 15;
    if(n>20000){
        cout<<"You can not draw more than 20000TK at once"<<endl;
        return 0;
    }
    n500 = (n-(n1000*1000))/500;
    n = (n-(n1000*1000))%500;
    n100 = n/100;
}
int main(){
    int n,a1000=0,a500 = 0, a100 = 0;
    cin>>n;
    notes(n,a1000,a500,a100);
    cout<<"Notes of 1000: "<<a1000<<"\nNotes of 500: "<<a500<<"\nNotes of 100: "<<a100<<endl;
    return 0;
}
