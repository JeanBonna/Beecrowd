#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    cin.ignore();
    while(rep--){
        string texto="",aux="";
        getline(cin,texto);
        for(char c:texto){
            if(isalpha(c))
                aux += (c+3);
            else aux+=c;
        }
        reverse(aux.begin(),aux.end());
        int metade = aux.size()/2;
        for(int i=metade;i<aux.size();i++){
            aux[i] -= 1;
        }
        cout << aux << endl;
    }


    return 0;
}

