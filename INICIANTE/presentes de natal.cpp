#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        vector<int>vet;
        cin >> n;
        if(!n)break;
        n = n*2;
        int cont = n;
        int x;
        while(cont--){
            cin >> x;
            vet.push_back(x);
        }
        int maior = -1e9, menor= 1e9,teste;

        for(int i=0;i<n/2;i++){
            teste = vet[i] + vet[(n-1)-i];
            if(teste > maior) maior = teste;
            if(teste < menor) menor = teste;
        }
        cout << maior << " " << menor << endl;
    }

    return 0;
}