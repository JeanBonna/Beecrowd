#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep;
    while(true){
        cin >> rep;
        if(!rep) break;
        int picos=0, x;
        vector<int>vet;
        while(rep--){
            cin >> x;
            vet.push_back(x);
        }
        int esq,dir;
        for(int ind=0;ind<vet.size();ind++){
            int i = ind;
            //cout << "indice " << i << endl;
            if(!i){
                //cout << "entrou no if\n";
                esq = vet[vet.size()-1];
                dir = vet[i+1];
            }else if(i == vet.size()-1){
                //cout << "entrou no elif\n";
                esq = vet[i-1];
                dir = vet[0];
            }else{
                //cout << "entrou no else\n";
                esq = vet[i-1];
                dir = vet[i+1];
            }
            //cout << esq << " " << vet[ind] << " " << dir << endl;
            if((esq < vet[ind] && dir < vet[ind]) || (esq > vet[ind] && dir > vet[ind])) picos++;
        }
        cout << picos << endl;
    }


    return 0;
}