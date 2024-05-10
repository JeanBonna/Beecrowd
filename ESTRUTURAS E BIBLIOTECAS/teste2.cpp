#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, total=0;
    string arv;
    map<string, double> arvs;

    cin >> n;
    //n++;
    //cout << "\n";
    cin.ignore();

    for(int i=0; i<=n; i++){
        while(getline(cin, arv) && arv[0] != '\0'){
            arvs[arv]++;
            ++total;
        }

        /*if(i<1){
            cout << "\n";
        }*/

        for(auto p : arvs){
            cout <<  p.first << "  " <<  fixed << setprecision(4) << (100*p.second)/total << endl;
        }
        if(i!=n-1 && !arvs.empty())
            cout << "\n";
       
        total = 0;
        arvs.clear();

    }



 
    return 0;
}