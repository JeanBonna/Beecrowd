#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, balao; cin >> n;
    vector<int>baloes;
    for (int i=0;i<n;i++){
        cin >> balao;
        baloes.push_back(balao);
    }
    int flecha=0, fl=0, i=0;
    while(true){
        //cout << count(baloes.begin(), baloes.end(),0) << endl;
        cout << i << endl;
        if(i == n){
           i=0;
           fl=0; 
        } 
        while(!baloes[i]) i++;
        if(count(baloes.begin(), baloes.end(),0)==n) break;
        if(baloes[i] && baloes[i] == fl){
            //cout << "entrou no if\n";
            fl--;
            // if(fl<=0){
            //     i=0;
            //     fl=0; 
            // }
            baloes[i]=0;
        }
        else if(fl<=0 && baloes[i]!=0){
            fl = baloes[i]-1;
            baloes[i]=0;
            flecha++;
            // if(fl<=0){
            //     i=0;
            //     fl=0; 
            // }
            //cout << "entrou no else if\n";

        }

        i++;
    }
    cout << flecha << '\n';

    return 0;
}