#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0;i<3;i++){
        int cont=0;
        string n="";
        while(n != "caw caw"){
            getline(cin,n);
            if(n[0]=='*')cont+=4;
            if(n[1]=='*')cont+=2;
            if(n[2]=='*')cont+=1;
        }
        cout << cont << endl;
    }

    return 0;
}