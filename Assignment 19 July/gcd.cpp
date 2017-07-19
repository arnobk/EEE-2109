#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter Two Numbers: ";
	cin>>m>>n;
	if(m<n)
		swap(m,n);
	while(m%n!=0){
		int a = n;
		n = m%n;
		m=a;
	}
	cout<<"GCD of these two number is: "<<n<<endl;
	return 0;
	
}
