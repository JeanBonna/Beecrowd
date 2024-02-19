#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int h; cin >> h;
        int maior=h;
        if(!h)break;
        while(h != 1){
            if(h>maior)maior=h;
            if(h%2==0)
                h = h/2;
            else
                h = h*3 + 1;
        }

        cout << maior << endl;
    }

    return 0;
}