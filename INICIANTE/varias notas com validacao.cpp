#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep=1;
    while(rep==1){
        float n,media=0;
        for(int i=0;i<2;i++){
            cin >> n;
            while(n<0 || n>10){
                cout << "nota invalida" << endl;
                cin >> n;
            }
            media+=n;
        }
        cout << fixed << setprecision(2) << "media = " << media/2 << endl;
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> rep;
        }while(rep<1 || rep>2);
    }
}