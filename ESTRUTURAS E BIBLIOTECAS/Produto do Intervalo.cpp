#include <bits/stdc++.h>

using namespace std;
#define MAX 112345
#define left(p) ((p) << 1)
#define right(p) (left(p)+1)

int n, k, a[MAX], st[4*MAX];

int _build(int p, int l, int r){
    int m = (l+r) / 2;
    if(l==r) return st[p] = a[l];
    return st[p] = _build(left(p), l, m) * _build(right(p), m+1, r);
}

int _query(int p, int l, int r, int i, int j){
    if(r<i || l > j) return 1;
    if(i <= l && r<= j) return st[p];
    int m = (l+r) / 2;
   return _query(left(p), l,m,i,j) * _query(right(p), m+1, r, i, j);
}

int _update(int p, int l, int r, int i, int val){
    if(i<l || i>r) return st[p];
    if(i==l && l==r) return st[p] = val;
    int m = (l+r)/2;
    return st[p] = _update(left(p), l,m,i,val) * _update(right(p),m+1,r,i,val); 
}

int main(){
    while(cin >> n >> k){
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]) a[i] /= abs(a[i]);
        }
        _build(1, 0, n-1);
        while(k--){
            char op;
            int i,j;
            cin >> op >> i >> j;
            switch (op){
                case 'C':
                    i--;
                    if(j) j/= abs(j);
                    _update(1, 0, n-1, i, j);
                    break;
                case 'P':
                i--; j--;
                int ans = _query(1,0,n-1,i,j);
                cout << (ans ? (ans > 0 ? '+' : '-') : '0');
            }
        }
        cout << '\n';
    }

    return 0;
}