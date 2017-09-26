//spring 2016 Q1(b)
#include<iostream>
#include<complex>
#define PI 3.1416
using namespace std;
int main(){
    double v,vtheta,c,l,r;
    cin>>v;
    cin>>vtheta;
    cin>>c;
    cin>>l;
    cin>>r;
    vtheta = vtheta*PI/180;
    double real = v*cos(vtheta);
    double img = v*sin(vtheta);
    complex <double> voltage(real,img);
    complex <double> xl(0,2*PI*50*l);
    cout<<"xl:"<< xl<<endl;
    complex <double> xc(0,-1.0/(2*PI*50*c));
    cout<<"xc:"<< xc<<endl;
    complex <double> para = (xl*xc)/(xl+xc);
    complex <double> rcom(r,0);
    complex <double> imp=rcom+para;
    cout<<"Imp: "<<imp<<endl;
    complex <double> current = voltage/imp;
    cout<<"current: "<<current<<endl;
    complex <double> vr = current*rcom;
    cout<<vr<<endl;
    cout<<"Vr: "<<abs(vr)<<endl;
    cout<<"Vr angle: "<<arg(vr)*180/PI<<endl;
    complex <double> vx = voltage - vr;
    cout<<"Vx: "<<abs(vx)<<endl;
    cout<<"Vx angle: "<<arg(vx)*180/PI<<endl;
}