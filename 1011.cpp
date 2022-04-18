#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
#define pi 3.14159

int main(){
	double raio,volume;
    
    cin>>raio;
    
    volume = (4.0/3.0)*pi*pow(raio,3);
	
    
    cout<<fixed;
    cout<<setprecision(3)<<"VOLUME = "<<volume<<endl;
    
	return 0;
}