#include <bits/stdc++.h>

using namespace std;

#define MAX 11234567

int n, _p[MAX], _rank[MAX];

int _find(int u){
    return _p[u] == u ? u : (_p[u] = _find(_p[u]));
}

void _union(int u, int v){
    u = _find(u); v = _find(v);
    if(_rank[u] < _rank[v]) _p[u] = v;
    else{
        _p[v] = u;
        if(_rank[u] == _rank[v]) _rank[u]++;
    }
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin >> cases;
    for(int cont =1;cont<=cases;cont++){
        int n,m; cin >> n >> m;
        for(int u=1; u<=n;u++){
            _p[u] = u; _rank[u] = 0;
        }
        while(m--){
            int x,y; cin >> x >> y;
            _union(x,y);
        }
        int ans=0;
        for(int i=1;i<n;i++)
            if(_find(i) != _find(i+1)){
                ans++;
                _union(i,i+1);
            }
        if(!ans)
            cout << "Caso #" << cont << ": a promessa foi cumprida\n";
        else
            cout << "Caso #" << cont << ": ainda falta(m) " << ans << " estrada(s)\n";
    }

    return 0;
}