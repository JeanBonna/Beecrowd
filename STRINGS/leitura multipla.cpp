#include <bits/stdc++.h>

using namespace std;

int main(){
    string rastro;
    int nprocess;
    while(cin >> rastro >> nprocess){
        int tam = rastro.size();
        int op=0;
        for(int i=0; i<tam;i++){
            op++;
            if(rastro[i] == 'R'){
                int rep = nprocess-1;
                while(rastro[i+1] == 'R' && rep--) i++;
            }
        }
        cout << op << "\n";
    }



    return 0;
}