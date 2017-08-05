#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int a[size],b[size];
    int *ptr1=a,*ptr2=b;
    for(int i=0;i<size;i++){
        cin>>a[i]; 
    }
    for(int i=0;i<size;i++){
        *(ptr2+i) = *(ptr1+size-1-i); //copy array a[] in reverse to array b[]
    }
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}