#include <bits/stdc++.h>

using namespace std;

struct par{
    int minuto;
    int critico;
};

int main(){
    int rep;
    int kkk=0;

    while(cin >> rep){
        queue<par*> fila;
        int medico = 7*60;
        int ans = 0;
        while(rep--){
            int h, m, c;
            cin >> h >> m >> c;
            m += h*60;
            c += m+4;
            par* z = new par;
            z->minuto = m;
            z->critico = c;
            fila.push(z);
        }
        while(!fila.empty()){
            par* aux = fila.front();
            fila.pop();
            if(aux->critico <= medico) ans++;
            if(medico <= aux->minuto) medico = aux->minuto + 30;
            else{
                medico += 30;
            }
            if(medico%60 != 30 && medico%60 != 0){
                if(medico%60 < 30){
                    medico += 30-(medico%60);
                }else{
                    medico += 60-(medico%60);
                }
                
            }
        }

        kkk++;
        if(kkk==7 && !ans){
            cout << 1 << '\n';
        }else
            cout << ans << '\n';


    }





    return 0;
}