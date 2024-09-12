#include <bits/stdc++.h>
#define INF ((int)1e9)
using namespace std;
typedef pair <int, int> ii;
typedef vector <ii> vii;
int N, M;
vector <int> dist;
vector <vii > LG;

void dijkstra(int s){
    dist.assign(N+1, INF);
    dist[s] = 0;
    priority_queue <ii, vector <ii>, greater <ii> > Q;
    Q.push(ii(0, s));
    while(!Q.empty()){
        int u = Q.top().second; Q.pop();
        for(auto e : LG[u]){
            int v = e.first , w = e.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                Q.push(ii(dist[v], v));
            }
        }
    }
}

int main(){
    cin >> N >> M;
    vii pqp;
    LG.assign(N+1,pqp);
    for(int i=0;i<M; i++){
        int x, y, z;
        cin >> x >> y >> z;
        LG[x].push_back(ii(y,z));
        LG[y].push_back(ii(x,z));
    }

    int serv;
    cin >> serv;
    dijkstra(serv);
    sort(dist.begin(), dist.end());
    int maior;
    for(int i=dist.size()-1; i>1;i--){
        cout << dist[i] << endl;
        if(dist[i] != 1000000000){
            maior = dist[i]; break;
        }
    }
    cout << maior-dist[1] << '\n';
}
