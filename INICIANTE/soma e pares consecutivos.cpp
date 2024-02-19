#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n; cin >> n;
        if(!n)break;
        int rep=0,som=0;
        while(rep<5){
            if(n%2==0){
                som+=n;
                rep++;
            }
            n++;
        }
        cout << som << endl;
    }
    return 0;
}