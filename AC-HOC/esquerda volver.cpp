#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(!n)break;
        char c;
        int dir=2;
        while(n--){
            cin >> c;
            if(c=='D'){
                if(dir==3)dir=0;
                else dir++;
            }
            if(c=='E'){
                if(dir==0)dir=3;
                else dir--;
            }
        }
        switch(dir){
            case 0:
                cout << 'S' << endl;
                break;
            case 1:
                cout << 'O' << endl;
                break;
            case 2:
                cout << 'N' << endl;
                break;
            case 3:
                cout << 'L' << endl;
                break;
        }
    }

    return 0;
}