#include <bits/stdc++.h>

using namespace std;
#define MAX 112345
typedef unsigned long long ull;
typedef pair<ull,ull> ii;
typedef pair<ii,ull> iii;
iii arr[MAX];


struct comp{
    bool operator()(const iii& a, const iii& b) const {
        return (double)a.first.first/a.first.second > (double)b.first.first/b.first.second;
    }
};

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull i=1;
    ull dia,multa;
    while(cin >> dia >> multa){
        arr[i] = iii(ii(dia,multa),i); i++;
    }
    ull last = 2;
    ull day=1, ans=0;
    priority_queue<iii,vector<iii>,comp> pq;
    pq.push(arr[1]);
    while(!pq.empty()){
        auto q = pq.top(); pq.pop();
        ans += q.first.second*(day-q.second);
        day += q.first.first;
        //  cout << "who " << q.first.second << endl;
        //  cout << "dia " << day << endl;
        //  cout << "multa " << ans << endl;
        if(day >= last){
            while(last != day+1 && last < i){
                pq.push(arr[last]); last++;
            }
        }
    }
    cout << ans << '\n';


    return 0;
}