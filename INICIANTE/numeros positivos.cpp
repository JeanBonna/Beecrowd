#include <bits/stdc++.h>

using namespace std;

int main(){
    float n,cont=0;
    for(int i=0;i<6;i++){
        cin >> n;
        if(n>0)cont++;
    }
    cout << cont << " valores positivos" << endl;
}