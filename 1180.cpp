#include<iostream>
using namespace std;

int main(){
    int n, i, pos, menor;
    cin>>n;
    if(1<n<1000){
    int x[n];
    
    for(i=0;i<n;i++){
		cin>>x[i];
	}
    
    menor=x[0];
    for(i=0;i<n;i++){
		if(x[i]<menor){
			menor=x[i];
			pos=i;
		}
	}
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;
    
	}
    
	return 0;
}