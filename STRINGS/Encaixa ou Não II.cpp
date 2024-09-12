#include <bits/stdc++.h>

using namespace std;

bool testa(string a, string b){
    int j=a.size()-b.size();
    for(int i=0;i<b.size();i++){
        if(b[i] != a[j]) return false;
        j++;
    }
    return true;
}

int main(){
    int rep; cin >> rep;
    while(rep--){
        string a, b;
        cin >> a >> b;
        if(b.size()>a.size()) cout << "nao encaixa\n";
        else{
            bool ans = testa(a, b);
            if(ans) cout << "encaixa\n";
            else cout << "nao encaixa\n";

        }
        

    }

    return 0;
}