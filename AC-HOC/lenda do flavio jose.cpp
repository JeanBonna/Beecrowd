#include <bits/stdc++.h>

using namespace std;

int posicao = 0;

int ans(vector<int>&vet, int jump){
    
    for(size_t i=0;i<vet.size();i++){
        posicao += jump;
        //cout << "aumentou a posicao " << posicao << endl;
        while(posicao > vet.size()){
            //cout << "Entrou if com posicao = " << posicao << endl;
            posicao -= vet.size();
            //cout << vet.size() << " = " << posicao << endl;
        }

        posicao--;
        //cout << "retirou posicao " << posicao << endl;
        vet.erase(vet.begin() + posicao);
    }
    //for(int n:vet)
    //    cout << n << " ";
    //cout << endl;
    return vet[0];
}


int main(){
    int contador=0,rep; cin >> rep;
    while(rep--){
        contador++;
        posicao = 0;
        int total, salto; cin >> total >> salto;
        vector<int>vet;
        for(int i=1;i<=total;i++)
            vet.push_back(i);
        int last;
        while(vet.size()>1)
            last = ans(vet,salto);
        cout << "Case " << contador << ": " << last << endl;
    }



    return 0;
}
