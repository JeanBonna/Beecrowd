#include <bits/stdc++.h>

using namespace std;

int main(){
    float sal, imposto=0; cin >> sal;
    if(sal < 2000) cout << "Isento" << endl;
    else{
        if(sal >= 3000) 
            imposto+=80;
        else
            imposto += (sal-2000) * 0.08;
        if(sal >= 4500) 
            imposto += 270;
        else if(sal > 3000)
            imposto += (sal-3000) * 0.18;
        if(sal >4500) 
            imposto += (sal-4500) * 0.28;
        cout << fixed << setprecision(2) << "R$ " << imposto << endl;
    }

    return 0;
}