#include <bits/stdc++.h>

using namespace std;
#define MAX 11234
int n,m;
vector<char> tor;
map<int,vector<int>> grafo;
//stack<int> q;
int visited[MAX];
bool aux = true;
int contador;

void dfs(int i){
    //cout << "dfs\n";
    //cout << i << endl;
    if(tor[i]=='B')contador++;
    visited[i] = 1;
    for(int j:grafo[i])
        if(!visited[j]) dfs(j);
}



int main(){
    // ios::ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    while(cin >> n >> m){
        memset(visited,0,sizeof visited);
        grafo.clear();
        tor.assign(n+1,'C');
        for(int i=1;i<=n;i++)
            cin >> tor[i];
        while(m--){
            int x,y;
            cin >> x >> y;
            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }
        contador =0;
        aux = true;
        for(int i=1;i<=n;i++){
            if(!visited[i]) dfs(i);
            if(contador&1){
                aux=false;
                break;
            }
            contador=0;
        }

        cout << (aux?"Y\n":"N\n");


    }
    return 0;
}