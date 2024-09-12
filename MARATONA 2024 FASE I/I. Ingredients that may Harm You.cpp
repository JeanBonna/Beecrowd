#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector<int> vet(n);
    for(int i=0;i<n;i++){
        cin >> vet[i];
    }
    int q, x; cin >> q;
    for(int i=0;i<q;i++){
        cin >> x;
        int ans=1;
        for(int j=0;j<n;j++){
            if(gcd(x,vet[j])!=1) continue;
                ans = (ans * 2) % MOD;

        }
        cout << ans << '\n';
    }


    return 0;
}