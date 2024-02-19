#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
         string x; cin >> x;
         bool valida=true;
         if(x == "P=NP") cout << "skipped" << endl;
         else{
            string a="",b="";
            for(char n:x){
                if(n =='+') valida = false;
                else if(valida)a+=n;
                else b +=n;
            }
            cout << stoi(a) + stoi(b) << endl;
         }
    }

    return 0;
}