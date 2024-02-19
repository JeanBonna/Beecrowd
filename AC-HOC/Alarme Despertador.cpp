#include <bits/stdc++.h>

using namespace std;

int minutos(int h1, int m1, int h2, int m2){
    if(h1 == 0) h1 = 24;
    if(h2 == 0) h2 = 24;
    int min1 = m1 + (h1*60);
    int min2 = m2 + (h2*60);
    if(min2 < min1) min2 = min2 + 1440;
    int min = min2 - min1;
    return min;
}

int main(){
    int h1,m1,h2,m2;
    while(true){
        cin >> h1 >> m1 >> h2 >> m2;
        if(!h1 && !m1 && !h2 && !m2) break;

        int min = minutos(h1,m1,h2,m2);

        cout << min << endl;
    }

    return 0;
}