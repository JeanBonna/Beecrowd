#include <bits/stdc++.h>

using namespace std;
#define MAX 50
int n=26;
int ag[MAX][MAX];

void fwarshall(){
    int u,v,w;
    for(w=0;w<n;w++)
        for(u=0;u<n;u++)
            for(v=0;v<n;v++)
                ag[u][v] |= (ag[u][w] & ag[w][v]);
}


int main(){
    int m,q,u,v;
    cin >> m >> q;
    memset(ag,0,sizeof(ag));
    for(u=0;u<n;u++)ag[u][u]=1;

    while(m--){
        char x,y;
        cin >> x >> y;
        u=x-'a'; v=y-'a';
        ag[u][v] = 1;
    }
    fwarshall();
    while(q--){
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size() != s2.size()) cout << "no\n";
        else{
            int ans=1;
            for(int i=0;ans && i<s1.size();i++)
                ans &= ag[s1[i]-'a'][s2[i]-'a'];
            cout << (ans?"yes":"no") << '\n';
        }
    }

    return 0;
}