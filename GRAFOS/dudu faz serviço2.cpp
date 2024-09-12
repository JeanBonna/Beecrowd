#include <bits/stdc++.h>

using namespace std;

int visited[1234567];
vector<int> posgrez;
map<int, vector<int>> grafo;
bool cycle = false;

void dfs(int s){
    visited[s] = 1;
    if(cycle) return;
    for(auto v: grafo[s]){
        if(visited[v]==1){
            cycle = true;
            return;
        }else if(!visited[v]) dfs(v);
    }
    visited[s]=2;
}

int main(){
    int rep; cin >> rep;
    while(rep--){
        int m,n; cin >> m >> n;
        int origin, dest;
        for(int i=0;i<n;i++){
            cin >> origin >> dest;
            posgrez.push_back(origin);
            grafo[origin].push_back(dest);
            
        }
        memset(visited, 0, sizeof(visited));
        for(auto z: posgrez)
            if(!visited[z]) dfs(z);

        cout << (cycle?"SIM" : "NAO") << '\n';
        grafo.clear();
        cycle = false;
    }

    return 0;
}