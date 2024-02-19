#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,m;
    while(cin >> x >> y >> m){
        int a, b;
        while(m--){
            cin >> a >> b;
            if((x >= a && y >= b) || (x >= b && y >= a))cout << "Sim" << endl;
            else cout << "Nao" << endl;
        }
    }

    return 0;
}