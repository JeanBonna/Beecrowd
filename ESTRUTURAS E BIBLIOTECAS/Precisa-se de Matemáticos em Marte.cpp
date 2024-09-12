#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MAX 112345

int n, bit[MAX], arr[MAX];

void setbit(int i, int delta){
    while(i<=n){
        bit[i] += delta;
        i += i & -i;
    }}

long long getbit(int i){
    ll ans=0;
    while(i){
        ans += bit[i];
        i -=  i & -i;
    }
    return ans;
}

int main(){
    cin >> n;
    int x;
    memset(bit,0,sizeof bit);
    for(int i=1;i<=n;i++){
        cin >> x;
        arr[i]=x;
        setbit(i,x);
    }
    char op;
    while(cin >> op >> x){
        if(op=='?') cout << getbit(x)-arr[x] << '\n';
        else
            setbit(x,-arr[x]);
    }



    return 0;
}