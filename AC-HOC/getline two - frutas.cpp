#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,dia=0; cin >> n;
    float gasto=0,kg=0;
    int div=n;
    while(n--){
        dia++;
        float preco; cin >> preco;
        string fruta;
        cin.ignore();
        getline(cin,fruta);
        int quant = count(fruta.begin(),fruta.end(),' ') + 1;
        gasto+=preco;
        kg+= quant;
        cout << "day " << dia <<": " << quant << " kg" << endl;
    }
    cout << fixed << setprecision(2) << kg/div << " kg by day" << endl
    << "R$ " << gasto/div << " by day" << endl;

    return 0;
}