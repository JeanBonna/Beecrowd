#include <bits/stdc++.h>

using namespace std;

int contador(vector<int>ali,vector<int>bet){
    int conta=0,contb=0;
    for(int n:ali){
        auto it = find(bet.begin(),bet.end(),n);
        if(it == bet.end())conta++;
    }
    for(int n:bet){
        auto it = find(ali.begin(),ali.end(),n);
        if(it == ali.end())contb++;
    }
    if(conta < contb)return conta;
    return contb;
}

int main(){
    while(true){
        int a,b,x; cin >> a >> b;
        vector<int> ali,bet;
        if(!a && !b) break;
        while(a--){
            cin >> x;
            if(find(ali.begin(),ali.end(),x) == ali.end())
                ali.push_back(x);
        }
        while(b--){
            cin >> x;
            if(find(bet.begin(),bet.end(),x) == bet.end())
                bet.push_back(x);
        }
        cout << contador(ali,bet) << endl;
    }

    return 0;
}