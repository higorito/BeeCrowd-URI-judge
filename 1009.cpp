#include<iostream>
using namespace std;
#include<iomanip>

int main(){
	string nome; 
    double fixo, montante,total;
    
    cin>>nome;
    cin>>fixo;
    cin>>montante;
    
    total = (montante*0.15) + fixo;
    
    cout<<fixed;
    
    cout<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
    
	return 0;
}