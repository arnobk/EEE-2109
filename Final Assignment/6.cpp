#include<iostream>
using namespace std;
class Add{
    public:
        void getData1();
        double addition();
    private:
        double n1,n2;
};
class Sub{
    public:
        void getData2();
        double subtract();
    private:
        double n3,n4;
};
class Multi:public Add,public Sub{
    private:
        void getdata_M(double,double);
        double x1,x2;
    public:
        double multi(double,double);
};
class Div:public Add,public Sub{
    private:
        void getdata_D(double,double);
        double y1,y2;
    public:
        double div(double,double);
};

void Add::getData1(){
    cout<<"Enter Two Numbers for Addition: ";
    cin>>n1>>n2;
}
double Add::addition(){
    getData1();
    return n1+n2;
}
void Sub::getData2(){
    cout<<"Enter Two Numbers for Subtraction: ";
    cin>>n3>>n4;
}
double Sub::subtract(){
    getData2();
    return n3-n4;
}
void Multi::getdata_M(double a1,double a2){
    x1 = a1;
    x2 = a2;
}
double Multi::multi(double a1,double a2){
    getdata_M(a1,a2);
    return x1*x2;
}
void Div::getdata_D(double b1,double b2){
    y1 = b1;
    y2 = b2;
}
double Div::div(double b1,double b2){
    getdata_D(b1,b2);
    return y1/y2;
}
int main(){
    Add add;
    Sub sub;
    Multi m;
    Div d;
    double a = add.addition();
    double b = sub.subtract();
    cout<<"Ans of Multiplication of result of Addition and Subtraction: "<<m.multi(a,b)<<endl;
    cout<<"Ans of Division of result of Addition and Subtraction: "<<d.div(a,b)<<endl;
}