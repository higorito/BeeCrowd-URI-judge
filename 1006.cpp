#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    double A, B,C, MEDIA;
    
    cin>>A;
    cin>>B;
    cin>>C;
    A=A*2;
    B=B*3;
    C=C*5;
    
    MEDIA=(A+B+C)/10;
    
    cout<<fixed;
    cout<<"MEDIA = "<<
	setprecision(1.)<<MEDIA<<endl;
    
	return 0;
}