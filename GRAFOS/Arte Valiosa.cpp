#include <bits/stdc++.h>

using namespace std;


int m,n,k;
int matriz[11000][11000];
int visited[11000][11000];

vector<int>veti,vetj;

bool ans = false;

// int posi[8] = {1,1,0,-1,-1,-1,0,1};
// int posj[8] = {0,1,1,1,0,-1,-1,-1};

int posi[4] = {0,1,-1,0};
int posj[4] = {1,0,0,-1};

struct comp{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return (a.first + a.second) < (b.first + b.second);
    }
};

/*void flood(int i, int j){
    if(i<0 || i > m || j < 0 || j > n)return;
    if(visited[i][j] || matriz[i][j]) return;
    if(i==m && j==n){
        cout << "S\n";
        exit(0);
    }
        
    visited[i][j] = 1;
    for(int k=0;k<8;k++){
        flood(i+posi[k], j+posj[k]);
    }
}*/


// void bfs(){
    
//     priority_queue<pair<int,int>, vector<pair<int,int>>, comp>q;
//     q.push({0,0});
//     visited[0][0] = 1;
//     while(!q.empty()){
//         auto p = q.top();
//         q.pop();
//         for(int k=0;k<8;k++){
//             int i = p.first+posi[k], j = p.second+posj[k];
//             if((i>=0 && i <= m && j >= 0 && j <= n) && !visited[i][j] && !matriz[i][j]){
//                 q.push({i, j});
//                 visited[i][j] = 1;
//                 if(i==m && j==n){
//                     cout << "S\n";
//                     exit(0);
//                 }
//             }
//         }
//     }
// }


void slk(){ 
    queue<pair<int,int>>q;
    //for(int ind=0;ind<m;ind++){
    for(int ind:veti){
        if(matriz[ind][0]){
            q.push({ind,0});
            visited[ind][0] = 1;
        }
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int i = p.first+posi[k], j = p.second+posj[k];
                if((i>=0 && i <= m && j >= 0 && j <= n) && !visited[i][j] && matriz[i][j]){
                    q.push({i, j});
                    visited[i][j] = 1;
                    //cout << "VALOR DE I: " << i << endl;
                    //cout << "VALOR DE J: " << j << endl;
                    if(i==0 || j==n){
                        cout << "N\n";
                        exit(0);
                    }
                }
            }
        }
    }

    memset(visited,0,sizeof(visited));

    //for(int ind=0;ind<n;ind++){
    for(int ind:vetj){
        if(matriz[ind][0])
            q.push({0,ind});
        visited[0][ind] = 1;
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int i = p.first+posi[k], j = p.second+posj[k];
                if((i>=0 && i <= m && j >= 0 && j <= n) && !visited[i][j] && matriz[i][j]){
                    q.push({i, j});
                    visited[i][j] = 1;
                    if(j==0 || i==m){
                        cout << "N\n";
                        exit(0);
                    }
                }
            }
        }
    }
    
}



int main(){
    // ios::ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    cin >> m >> n >> k;



    int x,y,s;
    for(int t=0;t<k;t++){
        cin >> x >> y >> s;
        int i = x-s;
        if(i<0) i=0;
        int toti = x+s, totj=y+s;
        
        while(i < toti){
            int j=y-s;
            if(j<0) j=0;
            while(j < totj){
                if(!i) vetj.push_back(j);
                if(!j) veti.push_back(i);
                if((i == x) || (j == y)){
                    matriz[i][j] = 1;
                } 
                else if((s - abs(i-x) >= abs(j-y)) && (i>=0 && i <= m && j >= 0 && j <= n)) matriz[i][j] = 1;

                j++;
            }

            i++;
        }
    }


    // for(int i=0;i<=m;i++){
    //     for(int j=0;j<=n;j++){
    //         cout << matriz[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "\n\n\n\nVISITED\n\n\n\n";

    // for(int i=0;i<=m;i++){
    //     for(int j=0;j<=n;j++){
    //         cout << visited[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    slk();

   cout << "S\n";



    return 0;
}