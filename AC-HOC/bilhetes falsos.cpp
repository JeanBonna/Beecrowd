#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x;
    while(true){
        vector<int> vet,clone;
        cin >> n >> m;
        if(!n && !m) break;
        for(int i=0;i<m;i++){
            cin >> x;
            if(find(vet.begin(),vet.end(),x) == vet.end())
                vet.push_back(x);
            else if(find(clone.begin(),clone.end(),x) == clone.end())
                clone.push_back(x);
        }
        cout << clone.size() << endl;
    }

    return 0;
}