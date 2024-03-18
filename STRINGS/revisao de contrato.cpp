#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        char falha;
        string texto;
        cin >> falha >> texto;
        if(falha == '0' && texto == "0") break;
        string aux;
        for(char c:texto){
            if(c == falha)continue;
            else if(aux.empty() && c == '0')continue;
            else aux.push_back(c);
        }
        if(aux.empty())
            cout << '0' << endl;
        else 
            cout << aux << endl;
    }


    return 0;
}