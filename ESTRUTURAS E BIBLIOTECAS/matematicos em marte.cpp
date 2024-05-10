#include <bits/stdc++.h>

using namespace std;

int n;
long long bit[100000000];

long long sum(int pos){
    long long soma=0;
    while(pos>0){
        soma += bit[pos];
        pos -= (pos & -pos);
    }
    return soma;
}

void update(int i, long long val){
    while(i <= n){
        bit[i] += val;
        i += (i & -i);
    }
}

int main(){
    cin >> n;
    vector<int>vet(n+1, 0);
    for(int i=1; i<=n;i++) cin >> vet[i], update(i, vet[i]);
    char op;
    int x;
    while(cin >> op >> x){
        if(op=='?') cout << sum(x)-vet[x] << "\n";
        else update(x, -vet[x]);
    }


    return 0;
}