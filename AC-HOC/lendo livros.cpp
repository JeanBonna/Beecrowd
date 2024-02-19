#include<bits/stdc++.h>

using namespace std;

int main(){
    float x,y,z;
    while(true){
        cin >> x; if(!x)break;
        cin >> y >> z;

        int asn = ((y/(z-x))*(z*x));

        if(asn==1)
            cout << asn << " pagina" << endl;
        else
            cout << asn << " paginas" << endl;
    }

    return 0;
}