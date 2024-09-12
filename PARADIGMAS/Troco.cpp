#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//vector<int> d;
//int memo[112345][1123];

int d[1123], n, m;

int dp(int v, int i){
    //if(v<0) return false;
    if(v==0) return true;
    if(i==m || v<0) return false;
    //if(memo[v][i]!=-1)return memo[v][i];
    return dp(v-d[i], i+1) || dp(v,i+1);
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //memset(memo, -1, sizeof memo);
    //int x; 
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> d[i];
        //d[i]=x;
    }
    cout << (dp(n,0)?"S\n":"N\n");

    return 0;
}