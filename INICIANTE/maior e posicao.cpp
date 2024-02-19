#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior=0,ind,x;
    for(int i=1;i<=100;i++){
        cin >> x;
        if(x>maior){
            maior =x;
            ind=i;
        }
    }
    cout << maior << endl << ind << endl;

    return 0;
}