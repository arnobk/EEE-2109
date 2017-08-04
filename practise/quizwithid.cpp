#include<iostream>
using namespace std;
int main(){
    int mark[109][4];
    for(int i =104;i<109;i++){
        cout<<"Enter 4 quiz marks of ID 16-01-05-"<<i<<": ";
        for(int j =0;j<4;j++){
            cin>>mark[i][j];
        }
    }
    for(int i=104;i<109;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(mark[i][k]<mark[i][k+1])
                swap(mark[i][k],mark[i][k+1]);
            }
        }
    }
    for(int i =104;i<109;i++){
        int total = 0;
        for(int j =0;j<3;j++){
            total +=mark[i][j];
        }
        cout<<"Avg Quiz Mark of ID 16-01-05-"<<i<<": "<<total/3.0<<endl;
    }
}