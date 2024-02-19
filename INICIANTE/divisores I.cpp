#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i=0; cin >> n;
    int aux = n;
    while (aux--){
        i++;
        if(n%i ==0)
            cout << i << endl;
    }

    return 0;
}