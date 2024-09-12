#include <bits/stdc++.h>

using namespace std;

int freq[112];

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    memset(freq, 0, sizeof(freq));

    int n,x; cin >> n;
    bitset<100> bs;
    for(int i=0;i<n;i++){
        cin >> x;
        bs = x;
        for(int i=0;i<100;i++){
            if(bs[i])freq[i]++;
        }
    }
    for(int i=0;i<n;i++){
        bs.reset();
        for(int i=0;i<100;i++){
            if(freq[i]){
                bs.set(i);freq[i]--;
            }
        }
        cout << bs.to_ullong() << (i==n-1? '\n':' ');
    }



    return 0;
}