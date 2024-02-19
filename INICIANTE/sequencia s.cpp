#include <bits/stdc++.h>

using namespace std;

int main(){
    double s=1;
    for(float i=2;i<=100;i++){
        s += 1/i;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}