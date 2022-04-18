#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    int num, hrs;
    float qtdHr, sal;
    
    cin>>num;
    cin>>hrs;
    cin>>qtdHr;
    
    cout<<fixed;
    sal=hrs*qtdHr;
    cout<<"NUMBER = "<<num<<endl;
    cout<<setprecision(2)<<"SALARY = U$ "<<sal<<endl;
    
	return 0;
}