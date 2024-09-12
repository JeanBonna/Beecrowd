#include <bits/stdc++.h>

using namespace std;
#define MAX 11234
int n,m;
int divida[MAX], visited[MAX];
vector<vector<int>>grafo;
int ans=0;

void dfs(int i){
    visited[i]=1;
    ans+=divida[i];
    for(int c:grafo[i]){
        if(!visited[c])dfs(c);
    }
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> divida[i];
    }

    grafo.resize(n);
    memset(visited,0,sizeof(visited));
    for(int i=0;i<m;i++){
        int x,y; cin >> x >> y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]) dfs(i);
        if(ans!=0) break;
    }
    cout << ((!ans) ? "POSSIBLE\n" : "IMPOSSIBLE\n");

    return 0;
}