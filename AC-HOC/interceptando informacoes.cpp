#include <bits/stdc++.h>

using namespace std;

int main(){
    bool flag = false;
    int x;
    for(int i=0;i<8;i++){
        cin >> x;
        if(x==9) flag = true;
    }
    cout << (flag?'F':'S') << '\n';

    return 0;
}