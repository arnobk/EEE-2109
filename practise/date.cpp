#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[15];
    cin.getline(a,15);
    int count=0,i=0;
    if(count==0){
        cout<<"Date: ";
        for(i=0;i<strlen(a);i++){
            
            if(a[i]=='/') {
                count++;
                i++;
                break;
            }
            cout<<a[i];
        }
        cout<<" ";
    }
    if(count==1){
        cout<<"Month: ";
        for(i=i;i<strlen(a);i++){
            
            if(a[i]=='/') {
                count++;
                i++;
                break;
            }
            cout<<a[i];
        }
        cout<<" ";
    }
    if(count==2){
        cout<<"Month: ";
        for(i=i;i<strlen(a);i++){
            
            if(a[i]=='/') {
                count++;
                i++;
                break;
            }
            cout<<a[i];
        }
        cout<<" ";
    }
}