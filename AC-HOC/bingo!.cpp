#include<bits/stdc++.h>

using namespace std;

set<int> possibilit(vector<int>vet){
    set<int>dif;
    for(int i=0;i<vet.size();i++){
        for(int j=i;j<vet.size();j++){
            if(vet[i]>vet[j])
                dif.insert(vet[i]-vet[j]);
            else
                dif.insert(vet[j]-vet[i]);
        }
    }
    return dif;
}

char asn(int n,set<int>dif){
    for(int i=0;i<=n;i++){
        if(!dif.count(i)) return 'N';
    }
    return 'Y';
}

int main(){
    while(true){
        int n,b,x;
        vector<int>vet;
        cin >> n >> b;
        if(!n && !b) break;
        for(int i=0;i<b;i++){
            cin >> x;
            vet.push_back(x);
        }
        set<int> dif = possibilit(vet);
        cout << asn(n,dif) << endl;
    }

    return 0;
}