#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep;
    while(true){
        cin >> rep;
        if(!rep) break;
        int divx, divy;
        cin >> divy >> divx;
        while(rep--){
            int x, y;
            string ans = "";
            cin >> y >> x;
            if(x < divx) ans += "S";
            else if(x > divx) ans += "N";
            if(y < divy) ans += "O";
            else if(y > divy) ans += "E";

            ans = ans.size() < 2 ? "divisa" : ans;
            cout << ans << "\n";   
        }
    }

    return 0;
}