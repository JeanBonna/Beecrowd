#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,n=0;cin >> x >> y;
    for(int i =1;i<=y;i++){
        n++;
        if(n<x)
            cout << i << " ";
        else{
            cout << i << endl;
            n=0;
        }
    }

    return 0;
}