#include<iostream>
using namespace std;
class Number {
    public:
        void assign(int);
        bool isPrime();
    private:
        int num;
};
int main(){
    Number number;
    int a;
    cin>>a;
    number.assign(a);
    if(number.isPrime()){
        cout<<a<<" is a Prime Number"<<endl;
    } else {
        cout<<a<<" is not a Prime Number"<<endl;
    }
}
void Number::assign(int n){
    num = n;
}
bool Number::isPrime(){
    for(int i=2;i<num;i++){
        if(num%i==0)
            return false;
    }   
    return true;
}