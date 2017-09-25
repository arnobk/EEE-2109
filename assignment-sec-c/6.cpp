#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cin>>n;
    double sum = 0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
}