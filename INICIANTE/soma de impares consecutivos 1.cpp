#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,menor,maior,som=0; cin >> x >> y;
    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    for(int i=menor+1;i<maior;i++)
        if(i % 2 != 0) som+=i;
    cout << som << endl;

    return 0;
}