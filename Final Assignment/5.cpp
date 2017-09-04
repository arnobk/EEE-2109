#include<iostream>
#include<cstring>
using namespace std;

class BasicInfo{
    private:
        char name[50];
        char code[10];
        char designation[10];
    public:
        void getData1();
        void printData1();
};
class EmployeeInfo: public BasicInfo{
    private:
        int xp;
        int age;
    public:
        void getData();
        void printData();
};

void BasicInfo::getData1(){
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Employee Code: ";
    cin>>code;
    cout<<"Enter Designation: ";
    cin>>designation;
}
void BasicInfo::printData1(){
    cout<<name<<"\t\t";
    cout<<code<<"\t\t";
    cout<<designation<<"\t\t";
}
void EmployeeInfo::getData(){
    getData1();
    cout<<"Years of Experience: ";
    cin>>xp;
    cout<<"Age of Employee: ";
    cin>>age;
}
void EmployeeInfo::printData(){
    printData1();
    cout<<xp<<"\t\t";
    cout<<age<<"\t";
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter No of Employees: ";
    cin>>n;
    EmployeeInfo data[n];
    for(int i=0;i<n;i++){
        cout<<"Record "<<i+1<<": "<<endl;
        data[i].getData();
    }
    cout<<"Name\t\tCode\tDegignation\tExperience(Years)\tAge(Years)\n";
    for(int i=0;i<n;i++){
        data[i].printData();
    }
}