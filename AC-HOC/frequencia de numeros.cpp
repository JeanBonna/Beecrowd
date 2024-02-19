#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n;
    vector<int>tot,dif;
    while(n--){
        cin >> x;
        tot.push_back(x);
        if(find(dif.begin(),dif.end(),x) == dif.end())
            dif.push_back(x);
    }
    sort(dif.begin(),dif.end());
    for(int n:dif){
        cout << n << " aparece " << count(tot.begin(),tot.end(),n) << " vez(es)" << endl;
    }

    return 0;
}