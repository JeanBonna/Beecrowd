#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    while(true){
        int cont=0,x;
        vector<int>vet;
        set<int>dif;
        cin >> n >> k;
        if(!n && !k) break;
        while(n--){
            cin >> x;
            vet.push_back(x);
            dif.insert(x);
        }
        for(int n:dif){
            if(count(vet.begin(),vet.end(),n) >= k) cont++;
        }
        cout << cont << endl;
    }

    return 0;
}