#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,x,soma=0; cin >> n >> k;
    deque<ll>deq;
    ll arr[n+10],aux[n+10];
    for(int i=0;i<n;i++){
        cin >> x;
        deq.push_back(x);
        arr[i]=x;
        aux[i]=x;
        soma+=x;
    }
    ll rep,rest;
    //if(k>n){
        rep = k/n; rest=k%n;
    //}else{
    //    rep=0; rest = k;
    //}
    //rest--;
    //bool first=true;
    soma*=rep;
    for(int j=0;j<rest-1;j++){
        deq.push_front(deq.back()); deq.pop_back();
        for(int i=0;i<n;i++){
            arr[i]+=deq[i];
            //if(first) arr[i]+= soma;
        }
        //first=false;
    }
    for(int i=0;i<n;i++){
        arr[i]+= soma;
        //if((n%k==0 || k%n==0) && k!=1) arr[i]-=aux[i];
        cout << arr[i] << (i==n-1?'\n':' ');
    }

    return 0;
}