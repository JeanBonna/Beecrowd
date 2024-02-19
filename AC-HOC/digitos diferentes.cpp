#include <bits/stdc++.h>

using namespace std;

int valida(int contador,string num){
    for(char n:num){
        if(count(num.begin(),num.end(),n) > 1)
            return contador;
    }
    contador++;
    return contador;
}

int main(){
    int n,m;
    while(cin >> n){
        cin >> m;
        int contador=0;
        for(int i=n;i<=m;i++){
            string num= to_string(i);
            contador = valida(contador,num);
        }
        cout << contador << endl;
    }

    return 0;
}