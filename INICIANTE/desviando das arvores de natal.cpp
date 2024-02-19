#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(!n)  break;
        int pos=1,x,mov=0;
        while(n--){
        vector<bool>vet;
        for(int i=0;i<3;i++){
            cin >> x; vet.push_back(x);
        }
        if(vet[pos] == 0)
            continue;
        else if(vet[0] == 0){
            if(pos == 1)
                mov++;
            else
                mov += 2;
            pos = 0;
        }
        else if(vet[1] == 0){
            mov++;
            pos = 1;
        }
        
        else{
           if(pos == 1)
                mov++;
            else
                mov += 2;
            pos = 2;
        }
    }
    cout << mov << endl;
    }
    return 0;
}