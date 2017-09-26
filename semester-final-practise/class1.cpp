/* Fibonacchi using constructor Function */
#include<iostream>
using namespace std;
    int f0 = 0;
    int f1 = 1;
    int f2 = 0;
class fibonacchi{
    public:
    fibonacchi(){
        f2 = f0+f1;
        cout<<f2<<" ";
        f0 = f1;
        f1 = f2;
    }
};
int main(){
    int n;
    cin>>n;
   for(int i=0;i<=n;i++){
       fibonacchi a;
   }

}
