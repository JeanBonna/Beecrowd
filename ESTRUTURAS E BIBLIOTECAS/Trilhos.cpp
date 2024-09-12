#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        int ord, naux=n;
        n++;
        while(cin >> ord && ord){
            int trem = 1;
            stack<int>pilha;
            while(trem <= n){
                //cout << "Ordenacao " << ord << '\n';
                //if(!pilha.empty())
                //    cout << "Topo: " << pilha.top() << '\n';
               if(!pilha.empty()){
                    if(pilha.top() == ord){
                        //cout << "Entrou no if\n";
                        pilha.pop();
                        break;
                    }
                } 
                //else{
                    //cout << "entrou no else\n";
                    pilha.push(trem);
                    trem++;
                //}
            }

            for(int i=1;i<naux;i++){
                cin >> ord;
                while(trem <= n){
                    //cout << "Ordenacao " << ord << '\n';
                    //if(!pilha.empty())
                    //    cout << "Topo: " << pilha.top() << '\n';
                if(!pilha.empty()){
                        if(pilha.top() == ord){
                            //cout << "Entrou no if\n";
                            pilha.pop();
                            break;
                        }
                    } 
                    //else{
                        //cout << "entrou no else\n";
                    pilha.push(trem);
                    trem++;
                    //}
                }
            }
            cout << (pilha.empty()?"Yes\n":"No\n");
        }
        cout << '\n';
        
    }

    return 0;
}