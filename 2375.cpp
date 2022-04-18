#include<iostream>
using namespace std;


int main(){
	int dBola, a, l, p, vCaixa;
	
	cin>>dBola;
	if(1<=dBola<=10000){
		cin>>a>>l>>p;
		if(1<=a<=10000 && 1<=l<=10000 && 1<=p<=10000){
			if(dBola<=a && dBola<=l && dBola<=p){
				cout<<"S\n";
			}
			else{cout<<"N\n";}
		}
	}
  
    
	return 0;
}