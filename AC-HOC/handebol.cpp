#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,ans=0; cin >> n >> m;
    while(n--){
        int x;
        vector<int> vet;
        for(int i=0;i<m;i++){
            cin >> x;
            vet.push_back(x);
        }
        if(find(vet.begin(),vet.end(),0) == vet.end())
            ans++;
    }
    cout << ans << endl;
    return 0;
}