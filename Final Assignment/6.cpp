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
        void getdata_M();
    public:
        double x1,x2;
        double multi();
};
class Div:public Multi{
    private:
        void getdata_D();
    public:
        double div();
        double y1,y2;
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
void Multi::getdata_M(){
    x1 = addition();
    x2 = subtract();
}
double Multi::multi(){
    getdata_M();
    return x1*x2;
}
void Div::getdata_D(){
    y1 = addition();
    y2 = subtract();
}
double Div::div(){
    getdata_D();
    return y1/y2;
}
int main(){
    Multi m;
    Div d;
    cout<<"Ans of Multiplication of result of Addition and Subtraction: "<<m.multi()<<endl;
    cout<<"Ans of Division of result of Addition and Subtraction: "<<d.div()<<endl;
}