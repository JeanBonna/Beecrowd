#include <bits/stdc++.h>

using namespace std;

string ans(int r1,int r2,int b1,int b2){
    if((r1%11!=b1 && r1%11!=10) || (r1%11==10 && b1))
        return "CPF invalido";
    if((r2%11!=b2 && r2%11!=10) || (r2%11==10 && b2))
        return "CPF invalido";
    return "CPF valido";
}

int main(){
    string x;
    while(cin >> x){
        int
        a1 = x[0]-'0',
        a2 = x[1]-'0',
        a3 = x[2]-'0',
        a4 = x[4]-'0',
        a5 = x[5]-'0',
        a6 = x[6]-'0',
        a7 = x[8]-'0',
        a8 = x[9]-'0',
        a9 = x[10]-'0',
        b1 = x[12]-'0',
        b2 = x[13]-'0';

        int r1 = a1*1+a2*2+a3*3+a4*4+a5*5+a6*6+a7*7+a8*8+a9*9,
        r2 = a1*9+a2*8+a3*7+a4*6+a5*5+a6*4+a7*3+a8*2+a9*1;

        cout << ans(r1,r2,b1,b2) << endl;
    }

    return 0;
}
