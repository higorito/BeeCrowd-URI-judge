#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>

int main(){
    float x1,y1,x2,y2,dist;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    
    dist= sqrtf(pow(x2-x1,2)+pow(y2-y1,2));
    
    cout<<fixed;
    cout<<setprecision(4)<<dist<<endl;
    
	return 0;
}