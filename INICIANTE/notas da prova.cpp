#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    if(!n) cout << 'E' << endl;
    else if(n<=35) cout << 'D' << endl;
    else if(n<=60) cout << 'C' << endl;
    else if(n<=85) cout << 'B' << endl;
    else cout << 'A' << endl;

    return 0;
}