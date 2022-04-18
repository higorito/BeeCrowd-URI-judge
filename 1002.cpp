#include<iostream>
using namespace std;
#define pi 3.14159;
#include<iomanip>

int main(){
    
   
    double raio,a;
    
    cin>>raio;
    a=(raio*raio)*pi;
    cout<<fixed;
    cout<<"A=";
    cout << setprecision(4) << a << endl;
    
	return 0;
}