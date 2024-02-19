#include <bits/stdc++.h>

using namespace std;

int ultimo(int dist,vector<int>vet){
    /*for(int n:vet)
            cout << n << " ";
           cout << endl;
            //teste*/


    int ind = -1,ultimo, contador =0, element;
    vector<int>rem;
    
    for(int j=0;j<vet.size()-1;j++){
            for(int i=0;i<dist;i++){
                if((ind+dist) > (vet.size()-1)){
                    element = vet[ind];
                if (ind == (vet.size()-1)){
                    ind = 0;
                    //contador++;
                    //cout << "Entrou no primeiro if, cont: " << contador << endl;
                }
                    else if(find(rem.begin(),rem.end(),element) != rem.end()){
                        //contador++;
                        //cout << "Entrou no if, cont: " << element << endl;
                        ind++;
                        element = vet[ind];
                        while(find(rem.begin(),rem.end(),element) != rem.end()){
                            ind++;
                            element = vet[ind];
                        }
                    }
                }
                else{
                        ind++;
                        element = vet[ind];
                        //cout << "Entrou no else, cont: " << element << endl;
                        while(find(rem.begin(),rem.end(),element) != rem.end()){
                            ind++;
                            element = vet[ind];
                            //cout << "Entrou no while, cont: " << element << endl;
                        }
                    //}
                }
            }
        //}else{
          //  for(int i=1;i<=dist;i++){
            //    do{
            //        ind++;
            //    }
            //    while(find(rem.begin(),rem.end(),ind) != rem.end());
                
        //    }
        //}
         
        //cout << "colocou : " << ind << endl;
        rem.push_back(vet[ind]);

        /*for(int n:rem)
            cout << n << " ";
        cout << endl;
            //teste*/
    }
    
    for(auto it= vet.begin();it!=vet.end();++it){
        if(find(rem.begin(),rem.end(),*it) == rem.end()){
            ultimo = *it;
            break;
        }
    }
    return ultimo;
}

int main(){
    int t, cont; cin >> t;
    while(t--){
        int tam,dist, last;
        cont++;

        cin >> tam >> dist;

        vector<int> vet;
        for (int i=1; i<=tam;i++)
            vet.push_back(i);

        last = ultimo(dist,vet);

        cout << "Case " << cont << ": " << last << endl;

    }


    return 0;
}




//[1] [2] [3] [4] [5] 