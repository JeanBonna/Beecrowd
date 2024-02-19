#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,cont=0,last=0; cin >> n;
    while(n--){
        cin >> x;
        if(x != last){
            cont++;
            last = x;
        }
    }
    cout << cont << endl;
    return 0;
}