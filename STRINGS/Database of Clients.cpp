#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<string> s;
    string x;
    int n; cin >> n;

    for(int t=0;t<n;t++){
        cin >> x;
        bool arroba=true, mais=true;
        string aux="";
        for(int i=0;i<x.size();i++){
            if(arroba){
                if(x[i]=='+')mais=false;
                if(x[i]=='@'){
                    arroba=false;
                    aux+=x[i];
                }
                else if(mais){
                    if(x[i]!='.')aux+=x[i];
                }
            }else{
                //arroba=false;
                aux+=x[i];
            }
        }
        //cout << aux << '\n';
        s.insert(aux);
    }

    cout << s.size() << '\n';


    return 0;
}