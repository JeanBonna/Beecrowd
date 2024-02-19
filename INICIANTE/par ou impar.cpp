#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n;
    while(n--){
        cin >> x;
        if(!x) cout << "NULL" << endl;
        else{
            if(x%2==0) cout << "EVEN ";
            else cout << "ODD ";
            
            if(x>0) cout << "POSITIVE" << endl;
            else cout << "NEGATIVE" << endl;
        }
    }

    return 0;
}