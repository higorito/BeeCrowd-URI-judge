#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
#define pi 3.14159

int main(){
	float n1,n2,n3,n4, media,nExame;
    
    cin>>n1>>n2>>n3>>n4;
    
    media=(n1*2+n2*3+n3*4+n4*1)/10;
    cout<<fixed;
    cout<<setprecision(1)<<"Media: "<<media<<endl;
    
	if(media>=7.0){
		cout<<"Aluno aprovado.\n";
	}
		else if(media<5.0){
				cout<<"Aluno reprovado.\n";	
		}
		else if(5.0<=media<=6.9){
				cout<<"Aluno em exame.\n";
				
				cin>>nExame;
				cout<<"Nota do exame: "<<nExame<<endl;
				media=(nExame+media)/2;
				
				if(media>=5.0){
					cout<<"Aluno aprovado.\n";
				}
				else{cout<<"Aluno reprovado.\n";}
				
				cout<<"Media final: "<<media<<endl;
		}
	
    
    
  
    
	return 0;
}