#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        int k, n; cin >> k;
        while(k--){
            cin >> n;
            switch(n){
                case 1:
                    cout << "Rolien\n";
                    break;
                case 2:
                    cout << "Naej\n";
                    break;
                case 3:
                    cout << "Elehcim\n";
                    break;
                case 4:
                    cout << "Odranoel\n";
                    break;
            }
        }
    }

    return 0;
}