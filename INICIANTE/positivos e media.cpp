#include <bits/stdc++.h>

using namespace std;

int main(){
    float n,cont=0,media=0;
    for(int i=0;i<6;i++){
        cin >> n;
        if(n>0){
            cont++;
            media+=n;
        }
    }
    cout << cont << " valores positivos" << endl
    << fixed << setprecision(1) << media/cont << endl;
}