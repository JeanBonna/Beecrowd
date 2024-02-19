#include <bits/stdc++.h>

using namespace std;

char asn(vector<int>bancos){
    for(int n:bancos){
        if(n<0)
            return 'N';
    }
    return 'S';
}

int main(){
    int b,n;
    while (true){
        cin >> b >> n;
        if(!b && !n)break;
        vector<int>bancos;
        int x,dev,pag,quant;
        for(int i=0;i<b;i++){
            cin >> x;
            bancos.push_back(x); 
        }
        while(n--){
                cin >> dev >> pag >> quant;
                dev--;
                pag--;
                bancos[dev]-=quant;
                bancos[pag]+=quant;
        }
        cout << asn(bancos) << endl;
    }

    return 0;
}