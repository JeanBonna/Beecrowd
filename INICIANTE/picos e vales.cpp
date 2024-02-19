#include <bits/stdc++.h>

using namespace std;

bool valida(vector<int>vet,int n){
    char last='x',aux;
    for(int i=1;i<n;i++){
        if(vet[i] > vet[i-1])
            aux = 'p';
        else if(vet[i] < vet[i-1])
            aux = 'v';
        else
            return false;
        if(aux == last)
            return false;
        last = aux;
    }
    return true;
}

int main(){
    int n,x; cin >> n;
    vector<int> vet;
    for(int i=0;i<n;i++){
        cin >> x;
        vet.push_back(x);
    }
    cout << valida(vet,n) << endl;

    return 0;
}