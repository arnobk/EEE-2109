/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input a three digit integer: ";
  cin>>n;
  int a1 = n/100;
  int x = n%100;
  int a2 = x/10;
  int a3 = x%10;
  cout<<a3<<a2<<a1<<endl;
  return 0;
}
