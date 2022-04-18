#include <iostream>
using namespace std;

int main(){
	float num;
	cin>>num;
	
	if(0.0000<=num&&num<=25.0000){
		cout<<"Intervalo [0,25]\n";
	}else if(25.0000<num&&num<=50.0000){
		cout<<"Intervalo (25,50]\n";
	}else if(50.0000<num&&num<=75.0000){
		cout<<"Intervalo (50,75]\n";
	}else if(75.0000<num&&num<=100.0000){
		cout<<"Intervalo (75,100]\n";
	}else{
		cout<<"Fora de intervalo\n";
	}
	
	return 0;
}