#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        int m,n; cin >> m >> n;
        string ans="";
        int origin, dest;
        set<int>visited;
        for(int i=0;i<n;i++){
            cin >> origin >> dest;
            if(visited.count(dest)) ans = "SIM";
            visited.insert(origin);
            //visited.insert(dest);
        }
        if(ans == "") ans = "NAO";
        cout << ans << '\n';
    }

    return 0;
}