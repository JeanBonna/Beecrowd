#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,q; cin >> n;
    float val,tot=0;
    while (n--){
        cin >> p >> q;
        if(p == 1001)val = 1.50;
        else if(p == 1002)val = 2.50;
        else if(p == 1003)val = 3.50;
        else if(p == 1004)val = 4.50;
        else if(p == 1005)val = 5.50;
        tot +=val*q;
    }
    cout << fixed << setprecision(2) << tot << endl;

    return 0;
}