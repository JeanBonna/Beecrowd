#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    while(cin >> n){
        string x;
        vector <string> vet;
        for(int i=0;i<n;i++){
            cin >> x; vet.push_back(x);
        }

        sort(vet.begin(),vet.end());
        int ans=0;
        for(int i=1;i<=n-1;i++){
            string ant=vet[i-1], now=vet[i];
            for(int j=0;j<ant.size();j++){
                if(ant[j] == now[j])ans++;
                else break;
            }
        }
        cout << ans << '\n';
    }


    return 0;
}