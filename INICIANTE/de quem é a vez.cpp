#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        string n1,n2,t1,t2;
        cin >> n1 >> t1 >> n2 >> t2;
        int x,y; cin >> x >> y;
        x+=y;

        if(x%2==0){
            if(t1 == "PAR")
                cout << n1 << endl;
            else
                cout << n2 << endl;
        }
        else{
            if(t1 == "IMPAR")
                cout << n1 << endl;
            else
                cout << n2 << endl;
        }
    }

    return 0;
}