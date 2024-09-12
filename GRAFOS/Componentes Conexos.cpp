#include <bits/stdc++.h>

using namespace std;
set<char>visited;

string alf;

void marcha(map<char,vector<char>>&grafo, map<char,set<char>>&setao){
    queue<char>q;
    for(auto c: alf){
        if(!visited.count(c)){
            q.push(c);
            setao[c].insert(c);
        }
            
        visited.insert(c);
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(char v:grafo[p]){
                if(!visited.count(v))
                    q.push(v);
                setao[c].insert(v);
                visited.insert(v);
            }
        }
    }
}


int main(){
    int rep; cin >> rep;
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    for(int i=1; i<=rep; i++){
        int V, E; cin >> V >> E;
        map<char, vector<char>>grafo;
        for(int j=0;j<E;j++){
            char a,b;
            cin >> a >> b;
            grafo[a].push_back(b);
            grafo[b].push_back(a);
        }

        map<char,set<char>> setao;
        alf = alfabeto.substr(0,V);
        //cout << alf << '\n';
        marcha(grafo,setao);

        cout << "Case #" << i << ":\n";
        for(auto c: setao){
            for(auto x: c.second){
                cout << x << ',';
            }
            cout << '\n';
        }
        cout << setao.size() << " connected components\n";
        cout << '\n';

        visited.clear();
    }


    return 0;
}