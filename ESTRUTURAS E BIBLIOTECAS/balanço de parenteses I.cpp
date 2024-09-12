#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    while(getline(cin, n)){
        string ans="";
        stack<char> p;
        for(char c:n){
            if(c == '(')
                p.push(c);
            if(c == ')'){
                if(p.empty()){
                    ans="incorrect";
                }else
                    p.pop();
            }
        }
        
        if(!p.empty() || ans !="") cout << "incorrect\n";
        else cout << "correct\n";
    }

    return 0;
}