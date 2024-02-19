#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n,m,x; cin >> n >> m;
        vector<int>tot,dif;
        if(!n && !m) break;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> x;
                tot.push_back(x);
                if(find(dif.begin(),dif.end(),x) == dif.end())
                    dif.push_back(x);
            }
        }
        int aux,first=0,sec=0,nf,ns;
        vector<int>contagens;
        for(int n:dif){
            aux = count(tot.begin(),tot.end(),n);
            contagens.push_back(aux);
            if(aux > first){
                sec = first;
                ns = nf;
                first=aux;
                nf = n;
            }
            else if(aux > sec){
                sec=aux;
                ns=n;
            }
        }

        vector<int>imprimir;

        if(count(contagens.begin(),contagens.end(),sec) == 1) cout << ns << " ";
        else{
            for(int n:dif){
                if(count(tot.begin(),tot.end(),n) == sec)
                    //cout << n << " ";
                    imprimir.push_back(n);
            }
        }
        sort(imprimir.begin(),imprimir.end());
        for(int n:imprimir)
            //if(n != imprimir.back())
                cout << n << " ";
            /*else
                cout << n;*/
        cout << endl;
    }

    return 0;
}