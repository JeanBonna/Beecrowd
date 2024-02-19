#include <bits/stdc++.h>

using namespace std;

void asn(string n,string x,int caso){
    int fem=0,masc=0,iguais=0;
    for(int i=0;i<x.size();i++){
        if(x[i] == n[0] && x[i+1]==n[1]){
            iguais++;
            if(x[i+3] == 'F')fem++;
            else masc++;
        }
    }
    cout << "Caso " << caso << ":" << endl
        << "Pares Iguais: " << iguais << endl
        << "F: " << fem << endl
        << "M: " << masc << endl;
}

int main(){
    int caso=0;
    string n;
    while(cin >> n){
        caso++;
        string x;
        cin.ignore();
        getline(cin,x);
        if(caso>1) cout << endl;
        asn(n,x,caso);
    }

    return 0;
}