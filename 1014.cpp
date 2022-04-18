#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    int x;
    float y,consu;
    
    cin>>x;
    cin>>y;
    
    consu=x/y; //   km/l
    
    cout<<fixed;
    cout<<setprecision(3)<<consu<<" km/l\n";
    
	return 0;
}