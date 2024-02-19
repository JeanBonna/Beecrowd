#include <bits/stdc++.h>

using namespace std;

int main(){
    int rap,lent; cin >> rap >> lent;
    int dif = lent-rap,volta=0,aux=0;
    while(aux < lent){
        volta++;
        aux+=dif;
    }
    cout << volta << endl;

    return 0;
}