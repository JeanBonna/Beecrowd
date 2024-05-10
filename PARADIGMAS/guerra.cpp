#include <bits/stdc++.h>

using namespace std;

int main(){
    //ios::ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int s, x; cin >> s;
    vector<int> vet1, vet2;
    for(int i=0; i<s;i++){
        cin >> x;
        vet1.push_back(x);
    }
    for(int i=0; i<s;i++){
        cin >> x;
        vet2.push_back(x);
    }

    /*auto maior2 = max_element(vet2.begin(),vet2.end());
    for(size_t i=0;i<vet1.size();i++){
        if(vet1[i] > *maior2)
            vet1.erase(vet1.begin()+i);
    }
    auto menor1 = min_element(vet1.begin(),vet1.end());
    for(size_t i=0;i<vet2.size();i++){
        if(vet2[i] < *menor1)
            vet2.erase(vet2.begin()+i);
    }*/


    sort(vet1.begin(), vet1.end());
    sort(vet2.begin(), vet2.end());

    //list<int> lista1(vet1.begin(),vet1.end()), lista2(vet2.begin(),vet2.end());

    int cont = 0;
    auto it_v1 = vet1.begin();
    auto it_v2 = vet2.begin();
    while(it_v1 != vet1.end()){
        if(*it_v2 > *it_v1){
            vet1.erase(it_v1);
            it_v2 = vet2.erase(it_v2);
            //it_v1 = vet1.begin();
            cont++;
            it_v2 = vet2.begin();
        }else{
           it_v2++; 
           if(it_v2 == vet2.end()){
                break;
                //it_v2 = vet2.begin();
                //vet1.erase(it_v1);
                //it_v1 = vet1.begin();
            }
        } 
    }

    cout << cont << "\n";

    return 0;
}