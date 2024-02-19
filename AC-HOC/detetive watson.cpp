#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    while(true){
        cin >> n;
        if(!n) break;
        vector<int>vet,aux;
        while(n--){
            cin >> x;
            vet.push_back(x);
        }
        aux = vet;
        sort(aux.begin(),aux.end());
        int procurado = aux[aux.size()-2];
        for(int i=0;i<vet.size();i++){
            if(vet[i] == procurado){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}