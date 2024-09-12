#include <bits/stdc++.h>

using namespace std;
int m;
#define MAX 51234
typedef pair<int,int>ii;
typedef pair<int, ii> iii; // iii(peso, ii(u,v))

int _p[MAX], _rank[MAX];
vector<iii> eg;

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

int kruskal(){
    int ans=0, u,v;
    memset(_rank, 0, sizeof(_rank));
    for(u=0;u<m;u++) _p[u] = u;
    sort(eg.begin(), eg.end());

    for(auto &[wei, e] : eg){
        u=e.first; v=e.second;
        if(_find(u) != _find(v)){
            _union(u,v);
            ans+=wei;
        }
    }
    return ans;
}

int main(){
    int n;
    while(cin >> m >> n && (m || n)){
        int x,y,z,tot=0;
        eg.clear();
        for(int i=0;i<n;i++){
            cin >> x >> y >> z;
            eg.push_back(iii(z,ii(x,y)));
            tot+=z;
        }
        cout << tot-kruskal() << '\n';
    }

    return 0;
}