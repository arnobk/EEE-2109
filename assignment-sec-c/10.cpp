#include<iostream>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    int total = a[0]+a[1]+a[2];
    cout<<"Avg of Best 3 Quiz: "<<total/3.0<<endl;

}