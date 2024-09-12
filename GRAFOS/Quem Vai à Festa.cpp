#include <bits/stdc++.h>

using namespace std;
#define MAX 1123
vector<vector<int>>grafo;
set<int>visited;

void dfs(int i){
    if(visited.count(i)) return;
    visited.insert(i);
    for(int c:grafo[i]){
        dfs(c);
    }
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    while(cin >> n && n){
        grafo.resize(MAX);
        while(n--){
            string par; cin >> par;
            int a,b;
            string aux="";
            int i;
            for(i=1;i<par.length();i++){
                if(par[i]!=',')aux+=par[i];
                else break;
            }
            //cout << aux << endl;
            a = stoi(aux);
            aux="";
            i++;
            while(i<par.length()-1){
                aux+=par[i]; i++;
            }
            //cout << aux << endl;
            b = stoi(aux);
            grafo[a].push_back(b);
            grafo[b].push_back(a);

        }
        dfs(1);
        cout << visited.size() << '\n';
        grafo.clear();
        visited.clear();
    }

    return 0;
}