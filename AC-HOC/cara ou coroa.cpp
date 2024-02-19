#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep;
    while(true){
        cin >> rep;
        int j=0,m=0;
        bool moeda;
        if(rep==0)break;
        for(int i=0;i<rep;i++){
            cin >> moeda;
            if(moeda)j++;
            else m++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }


    return 0;
}