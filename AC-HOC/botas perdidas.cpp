#include <bits/stdc++.h>

using namespace std;

int quant(vector<int>esq, vector<int>dir){
    int cont = 0;
    for(int n:esq){
        auto it = find(dir.begin(),dir.end(),n);
        if(it != dir.end()){
            dir.erase(it);
            cont++;
        }
    }
    return cont;
}

int main(){
    int n;
    while(cin >> n){
        vector<int>esq,dir;
        int num;
        char p;
        while(n--){
            cin >> num >> p;
            switch(p){
                case 'E':
                    esq.push_back(num);
                    break;
                case 'D':
                    dir.push_back(num);
            }
        }
        cout << quant(esq,dir) << endl;
    }

    return 0;
}