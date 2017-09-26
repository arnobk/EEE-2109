//Prime Factor
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=1){
        for(int i=2;;i++){
            if(n%i==0){
                cout<<i;
                n/=i;
                if(n>1)
                    cout<<"x";
                break;
            }
        }
    }
    cout<<endl;
}