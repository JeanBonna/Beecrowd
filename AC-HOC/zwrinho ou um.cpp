#include <bits/stdc++.h>

using namespace std;

int main(){
    bool a,b,c;
    while(cin >> a >> b >> c){
        if(a == b && a == c) cout << '*' << endl;
        else if(a != b && a != c) cout << 'A' << endl;
        else if(b != a && b != c) cout << 'B' << endl;
        else cout << 'C' << endl;

    }

    return 0;
}