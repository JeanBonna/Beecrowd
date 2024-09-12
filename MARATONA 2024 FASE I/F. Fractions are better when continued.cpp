#include <bits/stdc++.h>

using namespace std;

int fib[112];

void fibonatti(){
    fib[1]=1;
    fib[2]=2;
    for(int i=3;i<112;i++)
        fib[i] = fib[i-1]+fib[i-2];
    return;
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fibonatti();
    int n; cin >> n;
    cout << fib[n] << '\n';


    return 0;
}