#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, total=0;
    string arv;
    map<string, double> arvs;

    cin >> n;
    cin.ignore();

    for(int i=0; i<=n; i++){
        while(getline(cin, arv) && arv[0] != '\0'){
            arvs[arv]++;
            ++total;
        }

       
        for(auto p : arvs){
            cout <<  p.first << " " <<  fixed << setprecision(4) << (100*p.second)/total << endl;
        }

        if(i!=n && !arvs.empty()){
            cout << endl;
        }

        
        total = 0;
        arvs.clear();

    }



 
    return 0;
}