#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int>mapa;
    int rep; cin >> rep;
    int joao=0, maria=0,x1,x2;
    cin >> x1 >> x2;
    if(x1 > 10) x1=10;
    if(x2 > 10) x2=10;
    joao = x1 + x2;
    mapa[x1]++;
    mapa[x2]++;
    cin >> x1 >> x2;
    if(x1 > 10) x1=10;
    if(x2 > 10) x2=10;
    maria = x1+ x2;
    mapa[x1]++;
    mapa[x2]++;

    int somamesa=0;
    while(rep--){
        cin >> x1;
        if(x1 > 10) x1 = 10;
        somamesa+=x1;
        mapa[x1]++;
    }
    int valj=24-(joao+somamesa) , valm = 23 - (maria+somamesa);

    int repet = 15;
    while(repet--){
        //cout << "ENTRANDO NO WHILE\n";
        //cout << "valj=" << mapa[valj] << '\n';
        if(mapa[valj]<4 && (mapa[valm]<4 || valm == -1)){
            break;
        }
        if(mapa[valj] >= 4) valj++;
        if(mapa[valm] >= 4) valm = -1;
    }
    if(valj != -1 && valm!=-1){
        if(valj < 11 || valm<11){
            if(valj < valm){
                if(maria+somamesa + valj <= 23){
                    cout << valj << '\n';
                    return 0;
                } 
                else{
                   cout << "-1\n"; 
                   return 0;
                } 
            }else if(valm < 11){
                cout << valm << '\n';
                return 0;
            }
        }
    }else if(valj != -1 && valj < 11){
        if(maria+somamesa + valj <= 23){
            cout << valj << '\n';
            return 0;
        } 
                else{
                    cout << "-1\n";
                    return 0;
                } 
    }else if( valm<11){
        cout << valm << '\n';
        return 0;
    }
    cout << "-1\n";
    return 0;



    /*
    if(valj < valm){
        if(valj > 10){
            cout << "-1\n";
            return 0;
        }
        while(maria <= 23){
            if(mapa[valj] <=3){
                cout << valj << '\n';
                return 0;
            }else{
                if(valj > 10){
                    valm+=10;
                }else{
                    valm += valj;
                }
                valj++;
            }
        }
    }else{
        if(valm <= 10 && mapa[valm]<=3){
            cout << valm << '\n';
            return 0;
        }
    }
    cout << "-1\n";*/
}