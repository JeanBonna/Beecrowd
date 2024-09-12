#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;
int n,m;// visited[MAX];
unordered_set<int>visited;


int bfs(){
    queue<ii> q;
    q.push(ii(n,0));
    while(!q.empty()){
        auto p = q.front(); q.pop();
        if(p.first == m) return p.second;
        if(!visited.count(p.first*2)){
            q.push(ii(p.first*2, p.second+1));
            visited.insert(p.first*2);
            if(p.first*2 == m) return p.second+1;
        }
        if(!visited.count(p.first*3)){
            q.push(ii(p.first*3, p.second+1));
            visited.insert(p.first*3);
            if(p.first*3 == m) return p.second+1;
        } 
        if(!visited.count(p.first/2)){
            q.push(ii(p.first/2, p.second+1));
            visited.insert(p.first/2);
            if(p.first/2 == m) return p.second+1;
        } 
        if(!visited.count(p.first/3)){
            q.push(ii(p.first/3, p.second+1));
            visited.insert(p.first/3);
            if(p.first/3 == m) return p.second+1;
        } 
        if(!visited.count(p.first+7)){
            q.push(ii(p.first+7, p.second+1));
            visited.insert(p.first+7);
            if(p.first+7 == m) return p.second+1;
        } 
        if(!visited.count(p.first-7)){
            q.push(ii(p.first-7, p.second+1));
            visited.insert(p.first-7);
            if(p.first-7 == m) return p.second+1;
        } 
    }
    return -1;
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    //memset(visited, 0, sizeof visited);
    cout << bfs() << '\n';

    return 0;
}