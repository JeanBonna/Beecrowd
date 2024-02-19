#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,q;
    cin >> a >> b;

    for(int r = 0; r<abs(b);r++){
        if(((a-r)%b) == 0){
            q = (a-r)/b;
            cout << q << " " << r << endl;
            break;
        }
    }

    return 0;
}