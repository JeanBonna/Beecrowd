#include <bits/stdc++.h>

using namespace std;

struct aluno{
    string nome;
    int num;
    aluno *prev;
    aluno *post;
};

int main(){
    int n;
    while(cin >> n && n){
        vector<aluno>vet;
        for(int i=0;i<n;i++){
            aluno x;
            cin >> x.nome >> x.num;
            vet.push_back(x);
        }
        for(int i=1;i<n;i++){
            vet[i-1].post = &vet[i];
            vet[i].prev = &vet[i-1];
        }
        vet[0].prev = &vet[n-1];
        vet[n-1].post = &vet[0];
    
        int count=0;
        int p = vet[0].num;
        auto indice = &vet[0];
        while(count != n-1){
            if(p&1){
                for(int i=0;i<p;i++)
                    indice = indice->post;
            }else{
                for(int i=0;i<p;i++)
                    indice = indice->prev;
            }

            p = indice->num;
            indice->prev->post = indice->post;
            indice->post->prev = indice->prev;
            count++;
        }

        cout << "Vencedor(a): " << indice->post->nome << '\n';

    }



    return 0;
}