#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string, string> mapa;
    int rep; cin >> rep;
    string lang, trad;
    while(rep--){
        cin >> lang;
        cin.ignore();
        getline(cin, trad);
        mapa[lang] = trad;
    }
    cin >> rep;
    string nome;
    while(rep--){
        cin.ignore();
        getline(cin, nome);
        cin >> lang;
        cout << nome << endl << mapa[lang] << endl << endl;
    }

    return 0;
}