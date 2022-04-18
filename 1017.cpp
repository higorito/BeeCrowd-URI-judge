#include<iostream>
#include<iomanip>
 
using namespace std;

int main(){
	
	int tGasto, velMedia;
	float tot;
	
	cin>>tGasto;
	cin>>velMedia;
	tot=(tGasto*velMedia)/12.0;

	cout<<fixed;
	cout<<setprecision(3)<<tot<<endl;
	
	
	return 0;
}