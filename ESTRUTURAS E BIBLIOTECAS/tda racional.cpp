#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1,d1,n2,d2;
    char op,lixo;

    int rep;
    while(cin >> rep){
        while(rep--){
            int ans1,ans2;
            cin >> n1 >> lixo >> d1 >> op >> n2 >> lixo >> d2;
            if(op=='+'){
                ans1 = n1*d2+n2*d1;
                ans2 = d1*d2;
            }else if(op=='-'){
                ans1 = n1*d2-n2*d1;
                ans2 = d1*d2;
            }else if(op=='*'){
                ans1= n1*n2;
                ans2=d1*d2;
            }else{
                ans1=n1*d2;
                ans2=n2*d1;
            }

            int simp1=ans1, simp2=ans2;
            int maior=simp1, menor = simp2, aux=simp1;
            if(simp1 > simp2){
            maior = simp1;
            menor = simp2;
        }else{
            maior = simp1;
            menor = simp2;
        }
        aux = maior;
        while(true){
            maior = aux;
            aux = menor;
            menor = maior % menor;
            if(!menor) break;
        }
        if(aux){
            simp1 = simp1/abs(aux);
            simp2 = simp2/abs(aux);
        }
            cout << ans1 << '/' << ans2 << " = " << simp1 << '/' << simp2 << "\n";
    }
    }


    return 0;
}