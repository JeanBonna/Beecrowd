#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,rep=5;
    vector<int>vet;
    while(rep--){
        cin >> n;
        vet.push_back(n);
    }
    cout << vet[0]*300 + vet[1]*1500 + vet[2]*600 + vet[3]*1000 + vet[4]*150 + 225 << endl;
    return 0;
}