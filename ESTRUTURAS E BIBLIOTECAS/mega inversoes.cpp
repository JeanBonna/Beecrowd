#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    int arr[rep];
    for(int i=0; i< rep; i++){
        int x; cin >> x;
        arr[i]=x;
    }
    int ans=0;
    for(int i=0; i<rep-2; i++){
        if(arr[i+2] <= arr[i+1] && arr[i+1] <= arr[i]) ans++;
    }
    cout << ans << "\n";


    return 0;
}