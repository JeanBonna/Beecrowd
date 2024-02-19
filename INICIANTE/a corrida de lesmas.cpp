#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    while(cin >> n){
        int maior=0;
        for(int i=0;i<n;i++){
            cin >> x;
            if(x > maior)
                maior = x;
        }
        if(maior < 10)
            cout << "1" << endl;
        else if(maior >=10 && maior <20)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }

    return 0;
}