
#include<bits/stdc++.h>

using namespace std;

bool ordena(string a, string b){
    return a.size() > b.size();
}



int main(){
    int rep; cin >> rep;
    while(rep--){
        string line;
        getline(cin, line);
        string word;
        istringstream stream(line);
        vector<string> vet;
        vet.rewha();
        while(stream >> word){
            vet.push_back(word);
        }
        sort(vet.begin(), vet.end(), ordena);
        cout << vet[0];
        for(size_t i=1;i<vet.size();i++){
            cout << " " << vet[i];
        }
        cout << "\n";
    }

    return 0;
}