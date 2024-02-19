#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c; cin >> a >> b >> c;
    if(a > (b-c) && a < (b+c) && b > (a-c) && b < (a+c) && c > (b-a) && c < (b+a)){
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
    }
    else{
        cout << fixed << setprecision(1) << "Area = " << (c/2)*(a+b) << endl;
    }
    return 0;
}