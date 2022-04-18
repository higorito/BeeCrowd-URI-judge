#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

int main(){
	int pc1,n1,pc2,n2;
	float val1,val2, total;
    
    cin>>pc1>>n1>>val1;
    cin>>pc2>>n2>>val2;
    
    total=n1*val1+n2*val2;
    
    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<total<<endl;
    
	return 0;
}