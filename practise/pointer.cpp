#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int *ptr = a;
    for(int i=0;i<n/2;i++){
        swap(*(ptr+i),*(ptr+n-1-i));
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}