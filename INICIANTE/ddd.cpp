#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    switch(n){
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
        default:
            cout << "DDD nao cadastrado" << endl;
            break;
    }

    return 0;
}