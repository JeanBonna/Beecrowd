#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    n--;
    vector<int> vet={0,1};
    for(int i=1;i<n;i++){
        vet.push_back(vet[i]+vet[i-1]);
    }
    for(int m:vet){
        if(m!=vet.back())
            cout << m << " ";
        else
            cout << m;
    }
    cout << endl;
    return 0;
}