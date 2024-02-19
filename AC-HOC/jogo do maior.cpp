#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(!n)break;
        int e,d,ep=0,dp=0;
        while(n--){
            cin >> e >> d;
            if(e > d)ep++;
            else if(d > e)dp++;
        }
        cout << ep << " " << dp << endl;
    }

    return 0;
}