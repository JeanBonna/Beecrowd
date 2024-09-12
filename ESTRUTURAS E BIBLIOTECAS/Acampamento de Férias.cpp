#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;

int main(){
    int n;
    while(cin >> n && n){
        int x;
        map<int,string>mapa;
        int nxt=0;
        vector<pair<int,int>> circ(n);
        for(int i=0;i<n;i++){
            int num;
            cin >> mapa[i] >> num;
            circ[i] = ii(i,num);
        }
        int indice=0;
        auto p = circ[indice].second;
        int tam = circ.size();
        while(circ.size()!=1){
            cout << indice << endl;
            if(p&1){
                indice += p;
            }else
                indice -= p;

            cout << "indice antes do ajuste " << indice << endl;
            // if(indice >= circ.size()){
            //     indice %= circ.size();
            //     indice = (indice+circ.size()) %circ.size();
            // }
            while(indice >= circ.size())indice -= circ.size();
            while(indice < 0) indice += circ.size();
            cout << "indice dps do ajuste " << indice << endl;

            cout << "removi o " << mapa[circ[indice].first] << '\n';
            cout << indice << endl;
            p = circ[indice].second;
            //if(indice == circ.size()) indice=0;
            circ.erase(circ.begin()+indice);
            //if(p&1)
                indice--;
            //else indice++;
            //else indice--;
        }

        cout << "Vencedor(a): " << mapa[circ[0].first] << '\n';

    }

    return 0;
}