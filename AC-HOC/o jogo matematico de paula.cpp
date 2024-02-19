#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string x;
        cin >> x;
        char t1=x[0],t2=x[2];
        int a=t1-'0',b=t2-'0';
        if(a==b) 
            cout << a*b << endl;
        else if(isupper(x[1]))
            cout << b-a << endl;
        else if(islower(x[1]))
            cout << b+a << endl;
    }
    return 0;
}