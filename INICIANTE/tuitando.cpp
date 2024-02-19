#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    getline(cin,t);
    int cont = t.size();
    if(cont <= 140)cout << "TWEET" << endl;
    else
        cout << "MUTE" << endl;

    return 0;
}