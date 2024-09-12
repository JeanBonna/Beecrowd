#include <bits/stdc++.h>

using namespace std;

unsigned long long len(unsigned long long x){
    if(!x)return 1;
    int ans=0;
    while(x){
        ans++;
        x/=10;
    }
    return ans;
}

void repet(unsigned long long espaco){
    while(espaco--)
        cout << " ";
}

int main(){
    unsigned long long n,tam; cin >> n;
    for(int k=0;k<n;k++){

        cin >> tam;
        unsigned long long matriz[tam][tam], larg[tam]={0};


        for(int i=0;i<tam;i++){
            for(int j=0;j<tam;j++){
                unsigned long long x;
                cin >> x;
                matriz[i][j]=x;
                matriz[i][j]*=matriz[i][j];
                if(len(matriz[i][j]) > larg[j])larg[j]=len(matriz[i][j]);
            }
        }

        cout << "Quadrado da matriz #" << k+4 << ":\n";

        for(int i=0;i<tam;i++){
            for(int j=0;j<tam;j++){
                unsigned long long espaco = larg[j]-len(matriz[i][j]);

                cout << (j?" ":"");
                repet(espaco);
                cout << matriz[i][j];
            }
            cout << '\n';
        }
        if(k!= n-1) cout << '\n';
    }


    return 0;
}