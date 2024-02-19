#include <bits/stdc++.h>

using namespace std;

set<int>resp;

string valida(int n){
    if(resp.count(n))return "YES";
    return "NO";
}

void respostas(){
    for(int i=0;i<101;i++){
        resp.insert(i*i);
    }
    for(int i=1;i<101;i++){
        for(int j=i;j<101;j++)
            resp.insert(i*i+j*j);
    }
}

int main(){
    int n;
    respostas();
    while(cin >> n){
        cout << valida(n) << endl;
    }
    return 0;
}