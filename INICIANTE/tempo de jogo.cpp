#include <bits/stdc++.h>

using namespace std;

int main(){
    int ti,tf; cin >> ti >> tf;
    if(tf<=ti) tf+=24;
    cout << "O JOGO DUROU " << tf-ti << " HORA(S)" << endl; 

    return 0;
}