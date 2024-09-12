#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    while(getline(cin,x)){
        char c = 'n';
        string ans;
        int n = x.size();
        for(int i=0;i<n;i++){
            x[i] = tolower(x[i]);
            if(c == 'n'){
                ans += toupper(x[i]);
                if(!isspace(x[i]))
                    c = 'M';
            }    
            else{
                ans += x[i];
                if(!isspace(x[i]))
                    c='n';
            }    
        }
        cout << ans << endl;
    }

    return 0;
}