#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        unordered_map<string,double> mapa;
        string chave;
        double valor;
        int elements; cin >> elements;
        while(elements--){
            cin >> chave >> valor;
            mapa[chave] = valor;
        }
        cin >> elements;
        int count;
        double total=0;
        while(elements--){
            cin >> chave >> count;
            total += mapa[chave] * count;
        }
        cout << "R$ " << fixed << setprecision(2) << total << endl;
    }


    return 0;
}
