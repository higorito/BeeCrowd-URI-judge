#include <iostream>

using namespace std;

int main() {
    
    int a, b, aa, bb, t, m;
    
    cin >> a >> aa >> b >> bb;
    
    t = b - a;   //final-inicial
    m = bb - aa;
    
    if (t == 0 && m <= 0) //24hrs... pq a diferença de final-inicial zerou o T
        t = 24;
    
    if (t < 0)
        t = t + 24;
    
    if (m < 0) {
        t--;
        m = m + 60;
    }
    
    cout << "O JOGO DUROU " << t << " HORA(S) E " << m << " MINUTO(S)" << endl;
    return 0;
}