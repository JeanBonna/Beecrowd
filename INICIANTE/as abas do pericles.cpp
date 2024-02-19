#include <bits/stdc++.h>

using namespace std;

int main(){
    int aba,n; cin >> aba >> n;
    string act;
    while(n--){
        cin >> act;
        if(act=="fechou")aba++;
        else aba--;
    }
    cout << aba << endl;
    return 0;
}