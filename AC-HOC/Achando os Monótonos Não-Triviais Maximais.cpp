#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string x; cin >> x;
    int ans = 0;

    for(int i=0; i<n;i++){
        if(i>0){
            if(x[i]=='a' && (x[i-1]=='a' || x[i+1]=='a')) ans++;
        }else{
            if(x[i]=='a' && x[i+1]=='a') ans++;
        }
            
    }
    cout << ans << '\n';
    return 0;
}