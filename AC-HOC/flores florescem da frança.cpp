#include <bits/stdc++.h>

using namespace std;

char valida(string n){
    char p=n[0];
    p = toupper(p);
    bool cont = false;
    for(int i=0;i<n.size();i++){
        if(isspace(n[i])){
            //cout << n[i] << p << " " << n[i+1] << endl;
            /*if(!cont){
                p = toupper(n[i+1]);
                cont = true;
            }*/
            if(p == toupper(n[i+1])) continue;
            else if(p != toupper(n[i+1])){
                //cout << n[i] << p << " " << n[i+1] << endl;
                return 'N';   
            }
        }
    }
    return 'Y';
}

int main(){
    while(true){
        string n;
        //cin.ignore();
        getline(cin,n);
        if(n == "*") break;
        char x = valida(n);
        cout << x << endl;
    }

    return 0;
}