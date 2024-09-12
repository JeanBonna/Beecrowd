#include <bits/stdc++.h>

using namespace std;

int bora(vector<int> &vet, int x){
    for(size_t i=0;i<vet.size();i++){
        if(vet[i] == x) return i+1;
    }
    return 0;
}

int main(){
    int N, Q, caso=0;
    while(cin >> N >> Q && (N || Q)){
        vector<int> vet;
        int x;
        caso++;
        for(int i=0;i<N;i++){
            cin >> x;
            vet.push_back(x);
        }
        sort(vet.begin(),vet.end());
        cout << "CASE# "<< caso << ":\n";
        for(int i=0;i<Q;i++){
            cin >> x;
            int ans = bora(vet, x);
            if(!ans){
                cout << x << " not found\n";
            }else{
                cout << x << " found at " << ans << "\n";
            }
        }

    }

    return 0;
}