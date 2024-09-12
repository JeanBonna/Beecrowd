#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        string x,y;
        cin >> x >> y;

        int tam;
        if(x.size() < y.size())
            tam = x.size();
        else
            tam = y.size();
        string ans="";
        for(int i=0;i<tam;i++){
            ans+=x[i];
            ans+=y[i];
        }
        if(x.size() < y.size()){
            for(int i=tam;i<y.size();i++)
                ans+=y[i];
        }else{
            for(int i=tam;i<x.size();i++)
                ans+=x[i];
        }

        cout << ans << '\n';
    }


    return 0;
}