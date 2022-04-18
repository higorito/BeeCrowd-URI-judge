#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    double A, B, MEDIA;
    
    cin>>A;
    cin>>B;
    A=A*3.5;
    B=B*7.5;
    
    MEDIA=(A+B)/11;
    
    cout<<fixed;
    cout<<"MEDIA = "<<
	setprecision(5)<<MEDIA<<endl;
    
	return 0;
}