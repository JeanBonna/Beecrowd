#include <bits/stdc++.h>

using namespace std;

int main(){
    float n,c=0,r=0,s=0,tot=0; cin >> n;
    while(n--){
        int num;
        char tipo;
        cin >> num >> tipo;
        tot+=num;
        switch(tipo){
            case 'C':
                c+=num;
                break;
            case 'R':
                r+=num;
                break;
            case 'S':
                s+=num;
                break;
        }
    }
    float pc=((c*100)/tot), pr=((r*100)/tot), ps=((s*100)/tot);
    cout << "Total: " << tot << " cobaias" << endl
    << "Total de coelhos: " << c << endl
    << "Total de ratos: " << r << endl
    << "Total de sapos: " << s << endl << fixed << setprecision(2) 
    << "Percentual de coelhos: " << pc << " %" << endl
    << "Percentual de ratos: " << pr << " %" << endl
    << "Percentual de sapos: " << ps << " %" << endl;

    return 0;
}