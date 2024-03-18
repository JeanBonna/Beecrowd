#include <bits/stdc++.h>

using namespace std;

int main(){
    int rep;cin >> rep;
    cin.ignore();
    while(rep--){
        string word;
        getline(cin,word);
        int metade = word.size()/2;
        string aux;
        for(int i = metade-1;i>=0;i--){
            aux += word[i];
        }
        for(int i = word.size()-1;i>=metade;i--){
            aux += word[i];
        }
        cout << aux << endl;
    }
    
    return 0;
}