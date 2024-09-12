#include <bits/stdc++.h>
using namespace std;

#define MAX 112345
typedef pair<int,int>ii;
typedef pair<int, ii> iii; // iii(peso, ii(u,v))


int n, _p[MAX], _rank[MAX], vis[MAX], a,b,cur_vis = 1;
vector<iii> eg;
map<ii,int>mapa;
//unordered_map<int,vector<ii>>grafo;
vector<vector<ii>>grafo(MAX);
//vector<int>mapa(MAX);
//map<int,int>contador;



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


int dfs(int i,int maior){
    //cout << "dfs de : " << i << " maior: " << maior << endl;
    vis[i]=cur_vis;
    if(i==b) return maior;
    //vis[i]=1;
    for(auto c:grafo[i]){
        if(vis[c.first]!=cur_vis){
            //cout << "valor de c.first: " << c.first << " peso: " << c.second << endl;
            //maior = max(maior,c.second);
            //cout << "maior = " << maior << " c.second = " << c.second << endl;
            //cout << "vis de " << c.first << " : " << vis[c.first] << endl;
            int temp = dfs(c.first,max(maior,c.second));
            if(temp!=-1)
                return temp;


        }
    }
    return -1;
}

int kruskal(){
    int ans=0, u,v;
    //set<int>vis;
    for(u=1;u<=n;u++) _p[u] = u;
    sort(eg.begin(), eg.end());
    //eg.push_front(iii(mapa[ii(a,b)], ii(a,b)));
    //eg.insert(eg.begin(), iii(mapa[ii(a,b)], ii(a,b)));

    for(auto &[wei, e] : eg){
        u=e.first; v=e.second;
        // cout << "Normal: " << u << " " << v << endl;
        // cout << "Pai: " << _find(u) << " " << _find(v) << endl;
        if(_find(u) != _find(v)){
            _union(u,v);
            grafo[u].emplace_back(ii(v,wei));
            grafo[v].emplace_back(ii(u,wei));
            ans+=wei;
        }
    }
    //eg.pop_front();
    return ans;
}
int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m,wei;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b >> wei;
        eg.push_back(iii(wei,ii(a,b)));
        mapa[ii(a,b)] = wei;
    }

    int kr = kruskal();
    int x; cin >> x;
    fill(vis, vis+n+1,0);
    while(x--){
        cur_vis++;
        //memset(vis,0, sizeof vis);
        cin >> a >> b;
        int ans = kr + mapa[ii(a,b)];
        //vis[a]=1;
        //vis[b]=1;
        //cout << "resp: " << ans << endl;
        //int x = grafo[a].size();
        //int y = grafo[b].size();
        //if(x==1 && y==1){
        //int maiora=0, maiorb=0;
        /*for(auto i:grafo[a])
            if(grafo[i.first].size()>1) maiora = max(maiora,i.second);
        
        for(auto i:grafo[b])
            if(grafo[i.first].size()>1) maiorb = max(maiorb,i.second);*/
        //int aresta=0;
        //int mai=0;
        
            //mai = max(maiora,maiorb); 
        //}
        //else if(x==1)
        //    mai = grafo[a][0].second;
        //else if(y==1)
        //    mai = grafo[b][0].second;
        //else
        //    mai = max(grafo[a][0].second,grafo[b][0].second); 


        int mai=dfs(a,0);
        //cout << "maior: " << mai << endl;
        ans -= mai;
            cout << ans << '\n';
    }


    return 0;
}
