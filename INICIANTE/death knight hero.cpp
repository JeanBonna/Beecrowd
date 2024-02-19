#include <bits/stdc++.h>

using namespace std;

bool valida(vector<char>vet){
    for(int i=0;i<vet.size()-1;i++)
            if(vet[i] == 'C' && vet[i+1] == 'D')
                return false;
    return true;
}

int main(){
    int n, cont=0; cin >> n;
    while(n--){
        string bat;
        vector<char>vet;
        cin >> bat;
        for(char n:bat)
            vet.push_back(n);
            
        if(valida(vet)) cont++;
    }
    cout << cont << endl;

    return 0;
}