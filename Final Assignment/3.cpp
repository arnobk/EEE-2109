#include<iostream>
using namespace std;
class Number {
    public:
        void assign(int);
        long fact();
    private:
        int num;
        long fac;
};
int main(){
    Number number;
    int a;
    cin>>a;
    number.assign(a);
    cout<<"Factorial of "<<a<<" is: "<<number.fact()<<endl;
}
void Number::assign(int n){
    num = n;
}
long Number::fact(){
    fac = 1;
    for(int i=num;i>0;i--)
        fac *= i;
    return fac;    
}