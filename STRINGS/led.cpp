#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int contador=0;
        string num; cin >> num;

        for(char c:num){
            if(c == '1') contador += 2;
            else if(c == '7') contador += 3;
            else if(c == '4') contador += 4;
            else if (c=='2' || c=='3' || c=='5') contador += 5;
            else if(c=='6' || c=='9' || c=='0') contador += 6;
            else if(c=='8') contador += 7;
        }
        cout << contador << " leds" << endl;
    }

    return 0;
}
