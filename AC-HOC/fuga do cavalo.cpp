#include <bits/stdc++.h>

using namespace std;

vector<string> cavalo(string cav){
    char a=cav[0],b=cav[1];
    vector<string> vet;
    string aux;
    if(a+2 < '9'){
        if(b+1 <= 'h'){
            aux = a+2;
            aux += b+1;
            vet.push_back(aux);
        }
        if(b-1 >= 'a'){
            aux = a+2;
            aux += b-1;
            vet.push_back(aux);
        }
    }
    if(a-2 > '0'){
        if(b+1 <= 'h'){
            aux = a-2;
            aux += b+1;
            vet.push_back(aux);
        }
        if(b-1 >= 'a'){
            aux = a-2;
            aux += b-1;
            vet.push_back(aux);
        }
    }
    if(b+2 <= 'h'){
        if(a+1 < '9'){
            aux = a+1;
            aux += b+2;
            vet.push_back(aux);
        }
        if(a-1 > 0){
            aux = a-1;
            aux += b+2;
            vet.push_back(aux);
        }
    }
    if(b-2 >= 'a'){
        if(a+1 < '9'){
            aux = a+1;
            aux += b-2;
            vet.push_back(aux);
        }
        if(a-1 > 0){
            aux = a-1;
            aux += b-2;
            vet.push_back(aux);
        }
    }
    return vet;   
}

int contador(vector<string> posi, vector<string>peao){
    string aux;
    for(string n:peao){
        char a=n[0],b=n[1];
        aux = a-1;
        aux += b+1;
        if(find(posi.begin(),posi.end(),aux) != posi.end()){
            auto it = find(posi.begin(),posi.end(),aux);
            posi.erase(it);
        }
        aux = a-1;
        aux += b-1;
        if(find(posi.begin(),posi.end(),aux) != posi.end()){
            auto it = find(posi.begin(),posi.end(),aux);
            posi.erase(it);
        }
    }
    /*for(string n:posi)
        cout << n << " ";
    cout << endl;*/
    return posi.size();
}

int main(){
    int teste=0;
    while(true){
        string cav,peao;
        vector<string> vet;
        cin >> cav;
        if(cav=="0")break;
        for(int i=0;i<8;i++){
            cin >> peao;
            vet.push_back(peao);
        }
        vector<string> postot = cavalo(cav);
            /*for(auto n:postot)
                cout << n << " ";
            cout << endl;*/

        int cont = contador(postot,vet);
        teste++;
        cout << "Caso de Teste #" << teste << ": " << cont << " movimento(s)." << endl;

    }
    
    return 0;
}