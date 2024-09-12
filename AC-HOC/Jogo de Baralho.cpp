#include <bits/stdc++.h>

using namespace std;
int n, k, coringa;
bool flag=false;
vector<string> vet;

string ordem = "A23456789DQJK";


void ze_da_manga(){
    while(true){
        // cout << "VALOR DE K: " << k << endl;
        // cout << "CORINGA: " << coringa << endl;
        // cout << "\nINICIO\n";
        // for(auto c: vet){
        //     cout << c << endl;
        // }


        // if(count(vet[k].begin(), vet[k].end(), vet[k][0]) == 4 && coringa!=k && vet[k].size()==4){
        //     cout << k+1 << '\n';
        //     return;
        // }

        if(coringa == k && flag){
            coringa++;
            k++;
            if(k==n){
                k=0;
                coringa=0;
            } 
            flag=false;
        }else{
            if(coringa==k) flag=true;
            int freq=100000000;
            char letra;
            for(auto c: vet[k]){
                int quant = count(vet[k].begin(), vet[k].end(), c);
                if(quant < freq){
                    freq = quant;
                    letra = c;
                }
                else if(quant == freq){
                    if(ordem.find(c) < ordem.find(letra)){
                        letra = c;
                    }
                }
            }
            int ind = k+1; if(ind==n)ind=0;
            vet[ind]+=letra;
            auto it = find(vet[k].begin(),vet[k].end(), letra); 
            //vet[k].find(letra);
            vet[k].erase(it);

            // cout << "\nFINAL DA RODADA\n";
            // for(auto c: vet){
            //     cout << c << endl;
            // }


            for(int i=0;i<n;i++)
                if(count(vet[i].begin(), vet[i].end(), vet[i][0]) == 4 && coringa!=i && vet[i].size()==4){
                    cout << i+1 << '\n';
                    return;
                }
            k = ind;
            }
    }



}

int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        string x; cin >> x;
        vet.push_back(x);
    }
    k--;
    coringa = k;
    ze_da_manga();

    return 0;
}