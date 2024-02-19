#include <bits/stdc++.h>

using namespace std;

string resposta(string &shel, string &raj){
    if(shel == raj) return "De novo!";
    else if((shel =="tesoura" && (raj =="papel" || raj=="lagarto"))
    || (shel=="papel" && (raj=="pedra" || raj=="Spock"))
    || (shel=="pedra" && (raj=="lagarto" || raj=="tesoura"))
    || (shel=="lagarto" && (raj=="Spock" || raj=="papel"))
    || (shel=="Spock" && (raj=="tesoura" || raj=="pedra")))
        return "Bazinga!";
    return "Raj trapaceou!";
}

int main(){
    int n,vez=1; cin >> n;
    string shel,raj;
    while(n--){
        cin >> shel >> raj;
        cout << "Caso #" << vez << ": " << resposta(shel,raj) << endl;
        vez++;
    }
    return 0;
}