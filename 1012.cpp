#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
#define pi 3.14159

int main(){
	double A,B,C, tri, cir, tra, qua, ret;
    
    cin>>A>>B>>C;
    
    tri=A*C/2;
    
    cir=pi*pow(C,2);
    
    tra=((A+B)*C)/2;
    
    qua=B*B;
    
    ret=A*B;
	
    
    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<cir<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<tra<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<qua<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<ret<<endl;
    
	return 0;
}