#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    cin.ignore();
    while(rep--){
        string palavra, ans="";
        getline(cin, palavra);
        bool flag=true;
        for(auto c:palavra){
            if(c!=' ' && flag){
                ans+=c;
                flag = false;
            }
            else if(c == ' ') flag=true; 
        }

        cout << ans << '\n';
    }


    return 0;
}