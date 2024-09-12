#include <bits/stdc++.h>
using namespace std;

#define MAX 112345
#define INF 112345678

typedef pair<int,int>ii;

int n, vis[MAX], a,b,cur_vis = 1;
map<ii,int>mapa;
//unordered_map<int,vector<ii>>grafo;
vector<vector<ii>>grafo;
//vector<int>mapa(MAX);
//map<int,int>contador;



int dist[MAX], ok[MAX];
vector<ii> lg[MAX];


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
            if(temp!=-1)return temp;


        }
    }
    return -1;
}

int prim(){
    int ans=0,u;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    for(u=1;u<=n;u++){
        dist[u] = INF;
        ok[u] = 0;
    } 
    q.push(ii(dist[1]=0, 1));
    while(!q.empty()){
        //cout << "entrei\n";
        u = q.top().second; q.pop();
        //cout << u << endl;
        if(ok[u]) continue;
        ok[u]=1; ans+=dist[u];
        //grafo[u].emplace_back(ii(v,wei));
        //grafo[v].emplace_back(ii(u,wei));
         for (auto &[v, wei] : lg[u]) {
            if (!ok[v] && dist[v] > wei) {
                dist[v] = wei;
                dist[u] = min(dist[u],wei)? min(dist[u],wei): max(dist[u],wei);
                q.push(ii(dist[v], v));

                // Adiciona a aresta ao grafo somente se é a melhor aresta para o vértice `v`
                grafo[u].emplace_back(v, wei);
                grafo[v].emplace_back(u, wei);
            }
        }
    }
    return ans;
}
int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m,wei;
    cin >> n >> m;
    grafo.resize(n+1);
    for(int i=0;i<m;i++){
        cin >> a >> b >> wei;
        //eg.push_back(iii(wei,ii(a,b)));
        lg[a].push_back(ii(b,wei)); lg[b].push_back(ii(a,wei));
        mapa[ii(a,b)] = wei;
        mapa[ii(b, a)] = wei;
    }

    int kr = prim();
    int x; cin >> x;
    fill(vis, vis+n+1,0);

    // for(int c=1;c<=n;c++)
    //     for(auto d:grafo[c])
    //     cout << c << " " << d.first << " " << d.second << "\n";
    //     cout << endl;
    while(x--){
        cur_vis++;
        cin >> a >> b;
        int ans = kr + mapa[ii(a,b)];
        //int mai=dfs(a,0);
        //ans -= mai;
        //cout << "dist: " << dist[a] << " " << dist[b] << endl;
        //ans -= (max(dist[a],dist[b])!=mapa[ii(a,b)]? max(dist[a],dist[b]): min(dist[a],dist[b]));
        ans -=max(dist[a],dist[b]);
        //cout << "menos: " << (max(dist[a],dist[b])!=mapa[ii(a,b)]? max(dist[a],dist[b]): min(dist[a],dist[b])) << endl;
            cout << ans << '\n';
    }


    return 0;
}
