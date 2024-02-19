#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,tot=0,x,y; cin >> n;
    while(n--){
        cin >> x >> y;
        tot += x*y;
    }
    cout << tot << endl;
    return 0;
}