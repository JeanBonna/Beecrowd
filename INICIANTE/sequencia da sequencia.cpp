#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,caso=0;
    while(cin >> n){
        int quant=1;
        string str;
        for(int i =0;i<=n;i++) quant += i;
        caso++;
        if(quant == 1) str = "numero";
        else str = "numeros";
        cout << "Caso " << caso << ": " << quant << " " << str << endl;
        cout << "0";
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++)
                cout << " " << i;
        }
        cout << endl << endl;
    }
    return 0;
}