#include <bits/stdc++.h>

using namespace std;
#define MAX 100000
#define LIMIT 112345
#define MAX_ITER 1000000
typedef pair<int,int> ii;
//set<int>visited;
int visited[112345], probi[112345];
//set<int> probi;
int ori,dest;

int bfs(){
    queue<ii> q;
    q.push(ii(ori, 0));
    visited[ori]=1;
    int iter=0;
    while(!q.empty() && iter < MAX_ITER){
        iter++;
        //cout << "aaaaaaa\n";
        auto p = q.front(); q.pop();
        //cout << p.first << " " << p.second << endl;
        if(p.first==dest) return p.second;
        //if(p.first<=0)p.first+=MAX;
        //if(p.first>=MAX)p.first-=MAX;
        visited[p.first]=1;
        
        if (p.first - 1 >= 0 && p.first - 1 <= MAX && !probi[p.first - 1] && !visited[p.first - 1]) {
            visited[p.first - 1] = 1;
            if(p.first-1 == dest) return p.second + 1;
            q.push(ii(p.first - 1, p.second + 1));
        }

        if (p.first + 1 >= 0 && p.first + 1 <= MAX && !probi[p.first + 1] && !visited[p.first + 1]) {
            visited[p.first + 1] = 1;
            if(p.first+1 == dest) return p.second + 1;
            q.push(ii(p.first + 1, p.second + 1));
        }

        if (p.first * 2 <= MAX && !probi[p.first * 2] && !visited[p.first * 2]) {
            visited[p.first * 2] = 1;
            if(p.first*2 == dest) return p.second + 1;
            q.push(ii(p.first * 2, p.second + 1));
        }

        if (p.first * 3 <= MAX && !probi[p.first * 3] && !visited[p.first * 3]) {
            visited[p.first * 3] = 1;
            if(p.first*3 == dest) return p.second + 1;
            q.push(ii(p.first * 3, p.second + 1));
        }

        if (p.first % 2 == 0 && p.first / 2 >= 0 && !probi[p.first / 2] && !visited[p.first / 2]) {
            visited[p.first / 2] = 1;
            if(p.first/2 == dest) return p.second + 1;
            q.push(ii(p.first / 2, p.second + 1));
        }
    }
    return -1;
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int prob;
    while(cin >> ori >> dest >> prob && (ori || dest || prob)){
        //visited.clear();
        //probi.clear();
        memset(visited, 0 , sizeof visited);
        memset(probi, 0 , sizeof probi);
        int x;
        for(int i=0;i<prob;i++){
            cin >> x;
            probi[x]=1;
            //probi.insert(x);
        }
        cout << bfs() << '\n';
    }


    return 0;
}