#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;
int n;
vector<ii> ped;
int memo[30][40];

int pd(int i, int tam){
    if(i==n) return 0;
    if(memo[i][tam]!=-1)return memo[i][tam];
    int c1=0,c2=0;
    if(ped[i].second <= tam){
        c1 += pd(i+1, tam-ped[i].second) + ped[i].first;
    }
    c2 += pd(i+1, tam);
    return max(c1,c2);
}


int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin >> n && n){
        memset(memo, -1, sizeof(memo));
        int tam; cin >> tam;
        int x,y;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            ped.push_back(ii(x,y));
        }
        cout << pd(0,tam) << " min.\n";
        ped.clear();
    }


    return 0;
}