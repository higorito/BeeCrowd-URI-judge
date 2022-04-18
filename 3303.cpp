#include <iostream>

using namespace std;

int main() {
    string pala;
	cin >> pala;
    
    int n = pala.size();
    if(n>=10){
		cout<<"palavrao\n";
	}
	else{cout<<"palavrinha\n";}
    
    return 0;
}