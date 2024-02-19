#include <bits/stdc++.h>

using namespace std;

string result(vector<string>vet){
    if(count(vet.begin(),vet.end(),"papel")==1 && count(vet.begin(),vet.end(),"pedra")==2)
        return "papel";
    else if(count(vet.begin(),vet.end(),"pedra")==1 && count(vet.begin(),vet.end(),"tesoura")==2)
        return "pedra";
    else if(count(vet.begin(),vet.end(),"tesoura")==1 && count(vet.begin(),vet.end(),"papel")==2)
        return "tesoura";
    return "emp";
}

int main(){
    string x;
    while(cin >> x){
        vector<string>vet;
        vet.push_back(x);
        for(int i=0;i<2;i++){
            cin >> x;
            vet.push_back(x);
        }

        string asn = result(vet);

        if(asn == "emp") cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        else if(vet[0]==asn) cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if(vet[1]==asn) cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if(vet[2]==asn) cout << "Urano perdeu algo muito precioso..." << endl;
    }

    return 0;
}