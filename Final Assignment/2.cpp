#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    double a[size];
    double multi = 1;
    for(int i=0; i<size; i++)
        cin>>a[i];
    double *ptr = a;
    for(int i=0;i<size;i++)
        multi *= *(ptr+i);
    cout<<multi<<endl;
    return 0;
}