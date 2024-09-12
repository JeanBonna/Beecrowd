#include <bits/stdc++.h>

using namespace std;
#define MAX 112
int n,x;
vector<int> carm;
int memo[MAX][MAX*MAX];

bool posgrez(int i, int resp){
    if(resp<0) return 0;
    if(i==n) return resp==0;

    if(memo[i][resp]!=-1) return memo[i][resp];
    return memo[i][resp] = posgrez(i+1,resp-carm[i]) || posgrez(i+1, resp);
}

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int med=0;
    for(int i=0;i<n;i++){
        cin >> x;
        carm.push_back(x);
        med+=x;
    }
    memset(memo, -1, sizeof(memo));
    int goal = med/2;
    if(med%2==1 || !posgrez(0,goal)){
        cout << "-1\n";
    }else{
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            //memset(memo, -1, sizeof(memo));
            if(posgrez(i+1,goal)){
                v1.push_back(carm[i]);
            }else{
                v2.push_back(carm[i]);
                goal-=carm[i];
            }
        }
        int mar=0, jor=0;
        for(int i=0;i<n;i++){
            if(mar<=jor){
                cout << v1.back() << (i!=n-1?" ":"\n");
                mar+=v1.back(); v1.pop_back();
            }else{
                cout << v2.back() << (i!=n-1?" ":"\n");
                jor+=v2.back(); v2.pop_back();
            }
        }
    }

    return 0;
}