#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    cin.ignore();
    string tree, teste;
        //cin >> teste;
        rep++;
    while(rep--){
        map<string, double> tabela;
        double contador=0;
        do{
            getline(cin,tree);
            if(tree != ""){
                tabela[tree]++;
                contador++;
            }
                
        }
        while(tree != "");
        for(auto arv:tabela){
            double porcent = arv.second*100/contador;
            cout << arv.first << " " << fixed << setprecision(4) << porcent << endl;
        }
        if(rep && !tabela.empty())
            cout << endl;
    }


    return 0;
}