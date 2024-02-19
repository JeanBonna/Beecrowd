#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(!n) break;
        cout << "1";
        for(int i=2;i<=n;i++)
            cout << " " << i;
        cout << endl;
    }
    return 0;
}