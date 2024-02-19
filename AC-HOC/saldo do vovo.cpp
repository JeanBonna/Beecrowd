#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s, mov;
    cin >> n >> s;
    int less = s;
    while(n--){
        cin >> mov;
        s += mov;
        if(s < less)less = s;
    }
    cout << less << endl;
    
    return 0;
}