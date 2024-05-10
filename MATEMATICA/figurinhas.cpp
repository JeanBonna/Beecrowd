#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        int x, y, maior, menor, aux;
        cin >> x >> y;
        if(x > y){
            maior = x;
            menor = y;
        }else{
            maior = x;
            menor = y;
        }
        aux = maior;
        while(true){
            maior = aux;
            aux = menor;
            menor = maior % menor;
            if(!menor) break;
        }
        cout << aux << endl;
    }
    return 0;
}