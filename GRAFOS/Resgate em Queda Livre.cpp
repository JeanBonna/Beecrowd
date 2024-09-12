#include <bits/stdc++.h>

using namespace std;

#define MAX 112345
typedef pair<int,int>ii;

typedef pair<double, ii> dii; // dii(peso, ii(u,v))

int n, _p[MAX], _rank[MAX];
vector<dii> eg;

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

double kruskal(){
    double ans=0;
    int u,v;
    //memset(_p, 0, sizeof(_p));
    memset(_rank, 0, sizeof(_rank));
    for(u=0;u<=n;u++) _p[u] = u;
    sort(eg.begin(), eg.end());
    //cout << "for\n";
    for(auto &[wei, e] : eg){
        u=e.first; v=e.second;
        // cout << "u " << u << " " << _find(u) << '\n';
        // cout << "v " << v << " " << _find(v) << '\n';
        // cout << "dist: " << wei << endl;
        if(_find(u) != _find(v)){
            // cout << "ENTREI\n";
            _union(u,v);
            ans+=wei;
        }
    }
    return ans;
}

double dist_euclid(int x1, int y1, int x2, int y2){
    return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
}

map<pair<int,int>,int> mapa;
map<int, pair<int,int>> chave;


int main(){
    int cases,x,y,v;
    cin >> cases;
    while(cases--){
        cin >> n;
        int cnt=1;
        mapa.clear();
        chave.clear();
        eg.clear();
        //mapa[ii(0,0)]=0;
        //chave[0] = ii(0,0);
        for(int z=0;z<n;z++){
            cin >> x >> y;
            //u = mapa[ii(0,0)];
            //v = !mapa.count(ii(x,y)) ? (mapa[ii(x,y)] = cnt++) : mapa[ii(x,y)];
            if (!mapa.count(ii(x, y))) {
                mapa[ii(x, y)] = cnt;
                chave[cnt] = ii(x, y);
                cnt++;
            }
            v = mapa[ii(x,y)];

            //double d = dist_euclid(0,0,x,y);
            for (auto &c : chave) {
                int k = c.first;
                int cx = c.second.first;
                int cy = c.second.second;
                double ddd = dist_euclid(cx, cy, x, y);
                //cout << "Distância: " << ddd << endl;
                if (k != v) {
                    if(ddd) eg.push_back(dii(ddd, ii(k, v)));
                }
            }
            //if(d) eg.push_back(dii(d, ii(u, v)));

        }
        // for (const auto &edge : eg) {
        //     cout << "Aresta: (" << edge.second.first << ", " << edge.second.second 
        //         << ") Peso: " << edge.first << endl;
        // }

        // cout << "\n\n";

        // for(auto t:chave){
        //     cout << t.second.first << " " << t.second.second << '\n';
        // }


        cout << fixed << setprecision(2) << kruskal()/100 << '\n'; 
    }

    return 0;
}