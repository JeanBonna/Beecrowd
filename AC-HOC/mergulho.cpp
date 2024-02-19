#include <bits/stdc++.h>

using namespace std;

int main(){
    int tot,vivo;
    while(cin >> tot){
        cin >> vivo;
        int x;
        vector<int>vet;
        while(vivo--){
            cin >> x;
            vet.push_back(x);
        }
        sort(vet.begin(),vet.end());
        int ind=0,dead=0;
        for(int i=1;i<=tot;i++){
            if(i == vet[ind])
                ind++;
            else{
                dead++;
                cout << i << " ";
            }
        }
        if(!dead)
            cout << "*";
        cout << endl;
    }

    return 0;
}