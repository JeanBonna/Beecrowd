#include <bits/stdc++.h>

using namespace std;

int main(){
    double s =1,div=2;
    for(int i=3;i<40;i++){
        if(i%2!=0){
            s+=i/div;
            div=div*2;
        }
    }
    cout << fixed << setprecision(2) << s << endl;

    return 0;
}