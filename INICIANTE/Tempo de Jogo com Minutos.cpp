#include <bits/stdc++.h>

using namespace std;

int main(){
    int hi,mi,hf,mf;
    cin >> hi >> mi >> hf >> mf;

    int ti = hi*60 + mi, tf = hf*60+mf;
    tf = tf - ti;

    if(tf < 0)
        tf = tf+1440;

    if (tf == 0)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
        cout << "O JOGO DUROU " << tf / 60 << " HORA(S) E " << tf%60 << " MINUTO(S)" << endl;

    return 0;
}