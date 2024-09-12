#include <bits/stdc++.h>

using namespace std;
#define INF 1123456789
typedef pair<int,int> ii;
typedef vector<ii> vii;

int n,m,c,k;
vector<vii>lg;
vector<int> dist;

void dijkstra(int s){
    dist.assign(n,INF);
    dist[s]=0;
    priority_queue<ii, vii, greater<ii>> q;
    q.push(ii(0,s));
    while(!q.empty()){
        int u=q.top().second; q.pop();
        for(auto e:lg[u]){
            int v=e.first, w=e.second;
            if(dist[v]>dist[u]+w){
                if((u<c-1) && v==u+1){
                    dist[v] = dist[u] + w;
                    q.push(ii(dist[v],v));
                }
                else if(u>=c-1){
                    dist[v] = dist[u] + w;
                    q.push(ii(dist[v],v));
                }
                //cout << u << " " << v << " dist = " << dist[v] <<  endl;
            }
        }
    }
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int u,v,p;
    while(cin >> n >> m >> c >> k){
        if(!n && !m && !c && !k) break;
        lg.resize(11234);
        while(m--){
            cin >> u >> v >> p;
            lg[u].push_back(ii(v,p));
            lg[v].push_back(ii(u,p));
        }
        //int dd = dijkstra2(k);
        //cout << "######DEBUG######\n";
        dijkstra(k);
        //cout << "######FIM-DE-DEBUG######\n";
        //cout << dd << " " << dist[k-1] << endl;
        cout << dist[c-1] << '\n';
        lg.clear();
    }

    return 0;
}