#include <bits/stdc++.h>

using namespace std;
int mat[60][60];
int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];
    
    int a=mat[0][0], b=mat[0][1], c=mat[1][0];
    if(a<b && a <c) cout << "0\n";
    else if(a>b && a <c) cout << "1\n";
    else if(a>b && a >c) cout << "2\n";
    else cout << "3\n";

    return 0;
}