#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x,y;
    map<string,int>mapa;
    set<string>setao;
    while(cin >> x >> y){
        mapa[x]++;
        setao.insert(y);
    }
    cout << "HALL OF MURDERERS\n";
    for(auto c:mapa){
        if(!setao.count(c.first))
            cout << c.first << " " << c.second << '\n';
    }


    return 0;
}