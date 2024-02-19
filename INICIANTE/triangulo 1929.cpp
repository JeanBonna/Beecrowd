#include <bits/stdc++.h>

using namespace std;

char resp(vector<int>vet){
    if(vet[2]<vet[1]+vet[0])
        return 'S';
    if(vet[3]<vet[2]+vet[1])
        return 'S';
    return 'N';
}

int main(){
    int n;
    vector<int>vet;
    for(int i=0;i<4;i++){
        cin >> n;
        vet.push_back(n);
    }
    sort(vet.begin(),vet.end());
    char asn = resp(vet);

    cout << asn << endl;
    return 0;
}