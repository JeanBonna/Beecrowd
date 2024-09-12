#include <bits/stdc++.h>

using namespace std;


int bora(vector<int> &vet, int salto){
    int posicao=1;
    int tam = vet.size();
    for(size_t i=0;i<tam;i++){
        //cout << "xxxxxxxx\n";
        while(posicao > vet.size()){
            posicao -= vet.size();
        }
        posicao--;
        //cout << "apaguei\n";
        //cout << "irei apagar o " << vet[posicao] << endl;
        vet.erase(vet.begin() + posicao);
        posicao += salto;
    }
    return vet[0];
}

int main(){
    int cdd;
    while(cin >> cdd && cdd){
        vector<int>vet;
        for(int i=1;i<100000;i++){
            vet.clear();
            for(int i=1;i<=cdd;i++){
                vet.push_back(i);
            }
            //cout << "tam do vet: " << vet.size() << '\n';
            //cout << "indo pos: " << i << '\n';
            int ans = bora(vet, i);
            //cout << "resposta: " << ans << endl;
            if(ans == 13){
                cout << i << '\n';
                break;
            } 
        }
        //cout << "brekei\n";
    }


    return 0;
}