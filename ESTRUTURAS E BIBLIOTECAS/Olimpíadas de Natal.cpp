#include <bits/stdc++.h>

using namespace std;

map<string,int>paises;
string resp[300];
vector<vector<int>>ranque(300,vector<int>(4,0));

bool cmp(vector<int> a, vector<int>b){
    return a[0] > b[0] || (a[0]==b[0] && a[1]>b[1]) || (a[0]==b[0] && a[1]==b[1] && a[2] > b[2]) || (a[0]==b[0] && a[1]==b[1] && a[2] == b[2] && resp[a[3]] < resp[b[3]]);
}

int mi=0;
int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string modalidade,pais;
    while(getline(cin,modalidade)){
        //cin.ignore();
        for(int i=0;i<3;i++){
            getline(cin, pais);
            if(paises.count(pais)){
                ranque[paises[pais]][i]++;
            }else{
                resp[mi] = pais;
                paises[pais]=mi;
                ranque[mi][i]++;
                ranque[mi][3]=mi;
                mi++;
            }
            //cout << resp[paises[pais]] << " " << ranque[paises[pais]][0] << " " << ranque[paises[pais]][1] << " " << ranque[paises[pais]][2] << '\n';

        }
    }

    sort(ranque.begin(),ranque.end(),cmp);
    cout << "Quadro de Medalhas\n";
    for(int i=0;i<mi;i++)
        cout << resp[ranque[i][3]] << " " << ranque[i][0] << " " << ranque[i][1] << " " << ranque[i][2] << '\n';
    return 0;
}