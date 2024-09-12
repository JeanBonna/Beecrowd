#include <bits/stdc++.h>
 
using namespace std;
typedef unsigned long long ull;
 
int sa,sb;
string ans;
bitset<500>bs1;
set<unsigned long long int> s;

void pdb(string b, int indb){
    if(indb==sb){
        bs1 = bitset<500>(b);
        s.insert(bs1.to_ullong());
        return;
    }
    if(b[indb]=='*'){
        b[indb]='1';
        pdb(b,indb+1);
        b[indb]='0';
        pdb(b, indb+1);
        return;
    }
    pdb(b,indb+1);
    return;
}


void pd(string a, int inda){
    if(inda==sa){
        bs1 = bitset<500>(a);
        //ull t = bs1.to_ullong();
        for(int c:s){
            ull resto=0;
            for(int i=0;i<500;i++){
                ull power = pow(2,i);
                resto = (bs1[i]? ((power+resto)%c): resto);
            }
            if(resto==0){
                ans=bs1.to_string();
                ans = ans.substr(ans.size()-sa, ans.size());
                cout << ans << '\n';
                exit(0);
                return;
            } 

        }
    }
    if(inda<sa)
    if(a[inda]=='*'){
        a[inda]='1';
        pd(a,inda+1);
        a[inda]='0';
        pd(a,inda+1);
        return;
    }
    if (inda < sa) pd(a, inda + 1);
}
 
int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b; cin >> a >> b;
    sa = a.size();
    sb = b.size();
    pdb(b,0);
    pd(a,0);
 
    return 0;
}