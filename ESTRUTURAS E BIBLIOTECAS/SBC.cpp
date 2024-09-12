#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef long long ll;

#define MAX 112345
int n;
ii proc[MAX];

int main(){
    while(cin >> n){
        int i, t=1; ll ans = 0;
        priority_queue<ii, vector<ii>, greater<ii>> q;
        for(i =0;i<n;i++){
            int x,y; cin >> x >> y;
            proc[i].first = x; proc[i].second = y;
        }
        sort(proc, proc+n);

        i=0;
        while(i<n || !q.empty()){
            while(i < n && proc[i].first <= t){
                q.push(ii(proc[i].second, proc[i].first));
                i++;
            }
            if(!q.empty()){
                ans += t - q.top().second;
                t+=q.top().first;
                q.pop();
            }else if(i < n) t = proc[i].first;
        }
        cout << ans << '\n';
    }

    return 0;
}