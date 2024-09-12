#include <bits/stdc++.h>

using namespace std;
int N,M;
map<int,vector<int>>grafo;

/*int bfs(){
    for(int i=1;i<=N;i++){
        set<int>visited;
        queue<int>q;
        q.push(i);
        visited.insert(i);
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(auto c:grafo[p]){
                if(!visited.count(c))
                    q.push(c);
                visited.insert(c);
            }
        }
        if(visited.size() != N) return 0;
    }
    return 1;
}*/


int bora(){
    set<int>visited;
    queue<int>q;
    q.push(1);
    visited.insert(1);
    while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(auto c:grafo[p]){
                if(!visited.count(c))
                    q.push(c);
                visited.insert(c);
            }
        }
    if(visited.size() != N) return 0;
    visited.clear();
    for(int i=2;i<=N;i++){
        //grafo[i].push_back(i);
        //cout << "REPETICAO DO " << i << '\n';
        q.push(i);
        visited.insert(i);
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(auto c:grafo[p]){
                //cout << c << '\n';
                if(!visited.count(c))
                    q.push(c);
                visited.insert(c);
                if(visited.count(1)) break;
            }
        }
        if(!visited.count(1)) return 0;

        visited.clear();
    }
    return 1;


}

int main(){
    //ios::ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    while(cin >> N >> M && (N || M)){

        int v,w,p;
        for(int i=0;i<M;i++){
            cin >> v >> w >> p;
            grafo[v].push_back(w);
            if(p==2) grafo[w].push_back(v);
        }
        cout << bora() << '\n';

        grafo.clear();
    }


    return 0;
}