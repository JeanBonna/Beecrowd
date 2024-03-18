#include<bits/stdc++.h>

using namespace std;

int main(){
    string x;
    while(cin >> x){
        if(x.size() < 10) cout << "palavrinha" << endl;
        else cout << "palavrao" << endl;
    }
    return 0;
}