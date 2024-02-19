#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(!n)break;
        while(n--){
            int x;
            cin >> x;
            if(x%2==0)
                cout << ((x-2)*2)+2 << endl;
            else
                cout <<((x-1)*2)+1 << endl;
        }
    }

    return 0;
}