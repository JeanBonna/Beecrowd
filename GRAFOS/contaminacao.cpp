#include <bits/stdc++.h>

using namespace std;

int diri[4] = {0,0,1,-1};
int dirj[4] = {1,-1,0,0};
int visited[50][50] = {0};

bool isValid(const int x, const int y, const int startx, const int starty){
    return startx >= 0 && startx < x && starty >= 0 && starty < y;
}

void flood_fill(const int &x, const int &y, char tabela[50][50], int startx, int starty){
    if(!isValid(x,y,startx,starty)) return;
    if(tabela[startx][starty] == 'X' || visited[startx][starty] == 1) return;
    else{
        tabela[startx][starty] = 'T';
        visited[startx][starty] = 1;
    }
    for(int i=0;i<4;i++){
        flood_fill(x,y,tabela,startx+diri[i], starty+dirj[i]);
    }
}

int main(){
    while(true){
        int x,y; cin >> x >> y;
        char c;
        vector<int>startx,starty;
        if(!x && !y) break;

        char tabela[50][50];

        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cin >> c;
                tabela[i][j] = c;
                if(c == 'T'){
                    startx.push_back(i);
                    starty.push_back(j);
                }
            }
        }

        for(int i=0;i<startx.size();i++){
            flood_fill(x,y,tabela, startx[i], starty[i]);
            memset(visited, 0, sizeof(visited));
        }
        
        //cout << endl;

        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cout << tabela[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }


    return 0;
}