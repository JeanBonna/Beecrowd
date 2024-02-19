#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,mai,men; cin >> x >> y;
    if(x>y){
        mai = x;
        men = y;
    }
    else{
        mai = y;
        men = x;
    }
    for(int i=men+1;i<mai;i++){
        if(i%5==2 || i%5==3)
            cout << i << endl;
    }

    return 0;
}