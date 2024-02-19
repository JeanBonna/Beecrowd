#include <bits/stdc++.h>

using namespace std;

int main(){
    int tot,n,x;
    cin >> tot;
    while(tot--){
        cin >> n;
        set<int>dif;
        while(n--){
            cin >> x;
            dif.insert(x);
        }
        cout << dif.size() << endl;
    }

    return 0;
}