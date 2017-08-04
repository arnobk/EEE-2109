#include<iostream>
using namespace std;
int main(){
    int mark[4];
    for(int i=0;i<4;i++){
        cin>>mark[i];
    }
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            if(mark[i]>mark[i+1])
                swap(mark[i],mark[i+1]);
        }
    }
    for(int i=0;i<4;i++){
        cout<<mark[i]<<" ";
    }
    int total = 0;
    for(int i=0;i<3;i++){
        total+=mark[i];
    }
    cout<<"Avg: "<<total/3.0<<endl;
}