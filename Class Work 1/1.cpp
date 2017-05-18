//
/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
using namespace std;

//A fuction for checking prime number
bool isPrime(int number)
{
	int i;
	for (i=2; i<number; i++){
		if (number % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
  int n;
  cout<<"Input an Integer: ";
  cin>>n;
  if(isPrime(n)==true)
    cout<<n<<" is a prime number."<<endl;
  else
    cout<<n<<" is not a prime number."<<endl;
  return 0;
}
