#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
int main(){
	double voltage,resistance,inductance,capacitance,xl,xc,resonanceFrequency,resonanceCurrent=0;
	cout<<"Enter Voltage, Resistance, Inductance, Capacitance (Separated by Space): ";
	cin>>voltage>>resistance>>inductance>>capacitance;
	for (int f=1; f<=10000; f++){
		xl = 2*PI*f*inductance;
		xc = 1/(2*PI*f*capacitance);
		double testCurrent = voltage/(sqrt(pow(resistance,2)+pow((xl-xc),2)));
		if(test_current>resonanceCurrent){
			resonanceCurrent = testCurrent;
			resonanceFrequency = f;
		}
	}
	cout<<"Resonance Frequency: "<<resonanceFrequency<<"Hz"<<endl;
	cout<<"Resonance Current: "<<voltage/resistance<<endl;
	return 0;

}
