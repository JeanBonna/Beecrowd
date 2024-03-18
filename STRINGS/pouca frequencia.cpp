#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep; cin >> rep;
    while(rep--){
        int quant;cin >> quant;
        string aluno;
        vector<string>vet, ans;
        for(int i=0;i<quant;i++){
            cin >> aluno;
            vet.push_back(aluno);
        }
        for(string aluno:vet){
            string freq;
            int total=0,presente=0;
            cin >> freq;
            for(char c:freq){
                if(c=='P'||c=='A')total++;
                if(c=='P')presente++;
            }
            //cout << "Aluno: " << aluno << " teve " << presente 
            //<< " em um total de " << total << " tendo presença de " << presente*100/total <<  endl;
            if(presente*100/total < 75)ans.push_back(aluno);
        }
        if(!ans.empty()){
            cout << ans[0];
            for(size_t i=1;i<ans.size();i++)
                cout << " " << ans[i];
        }
        cout << endl;
    }

    return 0;
}