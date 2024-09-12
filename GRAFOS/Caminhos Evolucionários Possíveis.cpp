#include <bits/stdc++.h>

using namespace std;
#define MAX 112345
#define P 1000000007
typedef vector<int> vi;
typedef long long ll;

int n,m,s,t;
int vis[MAX], cycle[MAX], comp[MAX], ord, ncomp, stkd[MAX]; 
ll paths[MAX];
vector<int> tsort;
stack<int> stk;

void tarjan(int u, vector<vi> &lg){
    if(vis[u]) return;
    vis[u] = cycle[u] = ord++;
    stk.push(u); stkd[u]=1;
    for(auto &v : lg[u]){
        tarjan(v, lg);
        if(stkd[v]) cycle[u] = min(cycle[u], cycle[v]);
    }
    if(vis[u] == cycle[u]){
        int v;
        do{
            v = stk.top(); stk.pop();
            stkd[v] = 0; comp[v] = ncomp;
        }while(v!=u);
        ncomp++;
    }

}

void dfs(int u, vector<vi> &lg){
    if(vis[u]) return;
    vis[u] = 1;
    for(auto &v : lg[u]) dfs(v, lg);
    tsort.push_back(u);
} 

int main(){
    int u,v,x,y;
    scanf("%d %d %d %d", &n, &m, &s, &t); s--; t--;
    vector<vi> lg(n);
    while(m--){
        scanf("%d %d", &u, &v); u--; v--;
        lg[u].push_back(v);
    }
    ord=1; ncomp=0;
    memset(vis,0,sizeof(vis));
    memset(stkd,0,sizeof(stkd));
    for(u=0;u<n;u++) tarjan(u,lg);

    vector<vi> ldag(ncomp);
    for(u=0;u<n;u++){
        x= comp[u];
        for(auto &w : lg[u]){
            y=comp[w];
            if(x!=y) ldag[x].push_back(y);
        }
    }
    memset(vis,0,sizeof(vis));
    for(x=0;x<ncomp;x++) dfs(x,ldag);
    memset(paths,0,sizeof(paths));
    paths[comp[s]] = 1;
    memset(vis,0,sizeof(vis));
    for(int i=ncomp-1;i>=0;i--){
        x = tsort[i];
        for(auto &z : ldag[x]){
            if(!vis[z]){
                paths[z] += paths[x];
                paths[z] %= P;
                vis[z] = 1;
            }
        }
        for(auto &z : ldag[x]) vis[z] = 0;
    }
    //cout << paths[comp[t]] << '\n';
    printf("%lld\n", paths[comp[t]]);


    return 0;
}