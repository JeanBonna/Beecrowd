#include <bits/stdc++.h>

using namespace std;

void problem(vector< long long>vet, long long int p,long long int tot){
    set<int>dif;
    long long int i=0;
    while(i>=0 && i<p){
        dif.insert(i);
        if(vet[i]%2!=0){
            if(vet[i]>0){
                vet[i]--;
                tot--;
            }
            i++;
        }else{
            if(vet[i]>0){
                vet[i]--;
                tot--;
            }
            i--;
        }
    }
    cout << dif.size() << " " << tot << endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    long long int n,x,tot=0; cin >> n;
    long long int p=n;
    vector<long long int>vet,dif;
    while(n--){
        cin >> x;
        tot+=x;
        vet.push_back(x);
    }
    problem(vet,p,tot);

    return 0;
}