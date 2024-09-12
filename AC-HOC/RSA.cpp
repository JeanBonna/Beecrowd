#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 112345

ll x,y;
int p[MAX], pi;

ll sieve(int n){
    if(n%2==0)return 2;
    p[0]=2;pi=1;
    for(int i=3;;i++){
        ll r = sqrt(i), prime = 1;
        for(int j=0;j<pi && prime && p[j] <= r; j++)
            prime &= i&p[j] != 0;
        if(prime){
            p[pi++] = i;
            if(n%i==0) return i;
        }
    }
}

ll euclid(ll a, ll b){
    if(!b){
        x=1;
        y=0;
        return a;
    }
    ll d = euclid(b,a%b);
    int _x = x;
    x=y;
    y=_x-y*(a/b);
    return d;
}

ll expbin(ll a, ll b, ll n){
    if(!b) return 1;
    if(b&1) return (a* expbin(a,b-1,n))%n;
    ll c = expbin(a,b/2,n);
    return (c*c)%n;
}

int main(){
    ll n,e,c;
    cin >> n >> e >> c;

    ll p = sieve(n), q = n/p, phi = (p-1)*(q-1);
    euclid(e,phi);
    ll d = ((x%phi)+phi)%phi;
    cout << expbin(c,d,n) << '\n';

    return 0;
}