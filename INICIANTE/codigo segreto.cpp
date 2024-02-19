#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<char>alf={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n;
    string x=""; x+=97; cout << x << endl;
    while(cin >>n){
        string x;
        cin.ignore();
        while(n--){
            getline(cin,x);
            int ind = count(x.begin(),x.end(),' ');
            ind *=3;
            for (int i=0;i<4;i++){
                if(x[i]=='.')
                    ind++;
                else
                    break;
            }
            cout << alf[ind-1] << endl;
        }
    }

    return 0;
}