/* Semester Final Spring 2016
    Question No 8
 */
#include<iostream>
#include<cmath>
using namespace std;
int number;
class number_read{
    public:
        void get_number(int n){
            number = n;
        }
        void display_input(){
            cout<<"Number: "<<number<<endl;
        }    
};
class digit_print{
    public:
        void print_digits(){
            int count=0;
            int x = number;
            for(int i=x;x>0;x/=10){
                count++;
            }
            x = number;
            do{
                int digit = x/(pow(10,count-1));
                
                x -= (digit*pow(10,count-1));
                count--;
                switch(digit){
                    case 1: cout<<"one ";break;
                    case 2: cout<<"two ";break;
                    case 3: cout<<"three ";break;
                    case 4: cout<<"four ";break;
                    case 5: cout<<"five ";break;
                    case 6: cout<<"six ";break;
                    case 7: cout<<"seven ";break;
                    case 8: cout<<"eight ";break;
                    case 9: cout<<"nine ";break;
                    case 0: cout<<"zero ";break;
                }
            } while(count>0);
            cout<<endl;
        }
};
class prime_number{
    public:
        bool is_prime(){
            if(number==1) return false;
            for(int i=2;i<number;i++){
                if(number%i==0) return false;
            }
            return true;
        }
};
class Display:public number_read,public digit_print,public prime_number{
    public:
        void display(int n){
            get_number(n);
            display_input();
            print_digits();
            if(is_prime()){
                cout<<"Prime Number"<<endl;
            } else {
                cout<<"Not Prime"<<endl;
            }
        }
};
int main(){
    Display a;
    int num;
    cin>>num;
    a.display(num);
}

