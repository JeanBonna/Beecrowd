#include <bits/stdc++.h>

using namespace std;

int main(){
    string vert,tipo,food; cin >> vert >> tipo >> food;

    if(vert == "vertebrado"){
        if(tipo == "ave"){
            if(food == "carnivoro")
                cout << "aguia" << endl;
            else    
                cout << "pomba" << endl;
        }
        else{
            if(food=="onivoro")
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }
    else{
        if(tipo=="inseto"){
            if(food=="hematofago")
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else{
            if(food=="hematofago")
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }

    return 0;
}