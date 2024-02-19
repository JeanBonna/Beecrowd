#include <bits/stdc++.h>

using namespace std;

int main(){
    int divi=0,dist;
    double tot=0;
    string name;
    while(true){
        getline(cin,name);
        cin >> dist;
        if(dist == 0) break;
        tot += dist;
        divi++;
        cin.ignore();
    }
    double media = tot/divi;
    cout << fixed << setprecision(1) << media << endl;
    return 0;
}