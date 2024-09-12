#include <bits/stdc++.h>

using namespace std;
int main(){
    int rep;
    while(true){
        cin >> rep;
        if(!rep) break;
        while(rep--){
            string ans;
            int a,b,c,d,e;
            cin >> a >> b >> c >> d >> e;
            if(a<=127) ans += "A";
            if(b<=127) ans += "B";
            if(c<=127) ans += "C";
            if(d<=127) ans += "D";
            if(e<=127) ans += "E";
            if(ans.size()!=1) cout << "*" << endl;
            else
                cout << ans << endl;
        }
    }


    return 0;
}