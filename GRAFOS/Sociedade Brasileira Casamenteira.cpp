#include <bits/stdc++.h>

using namespace std;
#define MAX 112345

int n, nei[MAX], vis[MAX];
map<string, int> s2u;

int dfs(int u, int l){
    if(vis[u]) return vis[u] == l;
    vis[u] = l;
    return dfs(nei[u], l);
}

int main(){
    n=0;
    int u,v,ans=0;
    string s1, s2;
    while(cin >> s1 >> s2){
        u = s2u.find(s1) == s2u.end() ? (s2u[s1] = n++) : s2u[s1];
        v = s2u.find(s2) == s2u.end() ? (s2u[s2] = n++) : s2u[s2];
        nei[u] = v;
    }
    memset(vis , 0, sizeof(vis));
    for(u=0; u < n; u++) ans += dfs(u, u+1);
    
    cout << ans << '\n';
    return 0;
}