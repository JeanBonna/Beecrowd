#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int>normal,cres;
    for(int i=0;i<3;i++){
        cin >> n;
        normal.push_back(n);
    }
    cres = normal;
    sort(cres.begin(),cres.end());
    for(int n:cres)
        cout << n << endl;
    cout << endl;
    for(int n:normal)
        cout << n << endl;
    return 0;
}