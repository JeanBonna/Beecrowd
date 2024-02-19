#include <bits/stdc++.h>
using namespace std;

int main(){
    int cont=0, t, ans;
    cin >> t;
    for(int i=0;i<5;i++){
        cin >> ans;
        if(ans == t)cont++;
    }
    cout << cont << endl;
    return 0;
}