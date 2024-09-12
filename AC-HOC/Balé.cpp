#include <bits/stdc++.h>

using namespace std;

// 2400 - Balé
//Fenwick Tree

#define MAX 112345
typedef long long ll;

int n, bit[MAX];

void setbit(int i, int delta){
    while(i<=n){
        bit[i] += delta;
        i += i & -i;
    }
}

ll getbit(int i){
    ll ans=0;
    while(i){
        ans += bit[i];
        i-= i&-i;
    }
    return ans;
}

int main(){
    int i,x;
    ll ans=0;

    memset(bit,0,sizeof(bit));
    cin >> n;

    for(i=1;i<=n;i++){
        cin >> x;
        ans += (i-1) - getbit(x-1);
        setbit(x, 1);
    }

    cout << ans << '\n';

    return 0;
}


100 000 000

[1,2,3,4,5]