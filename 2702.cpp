#include <iostream>

using namespace std;

int main() {
	int ca,ba,pa,cr,br,pr;
	int aux1=0,aux2=0,aux3=0;
	cin>>ca>>ba>>pa;
	cin>>cr>>br>>pr;
	if(0>=ca-cr){
		aux1=ca-cr;
	}
	if(ba-br<=0){
		aux2=ba-br;
	}
	if(pa-pr<=0){
		aux3=pa-pr;
	}
	cout<<(aux1+aux2+aux3)*-1<<endl;
	
    return 0;
}