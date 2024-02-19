#include <bits/stdc++.h>

using namespace std;


int main(){
    unsigned int n1,n2;

    while(cin >> n1 >> n2){
        unsigned int result = n1 ^ n2;

        cout << result << endl;
    }
    return 0;
}