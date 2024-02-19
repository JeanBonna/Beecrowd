#include <bits/stdc++.h>

using namespace std;


int encontra(vector<int>x,int r){
    bool encontrou = false;
    int loc = 1e9;
    for(int i=0;i<r-2;i++){
        if(x[i] == x[i+1] && x[i] == x[i+2] && !encontrou){
            loc = i;
            encontrou = true;
        }
    }
    return loc;
}

int main(){
    while(true){
        
        int r,n,msum=0,lsum=0,mloc,lloc;
        cin >> r;

        if(r == 0)
            break;

        vector<int> m,l;

        for(int i=0;i<r;i++){
            cin >> n;
            m.push_back(n);
        }

        for(int i=0;i<r;i++){
            cin >> n;
            l.push_back(n);
        }

        for(int n:m)
            msum += n;
        for(int n:l)
            lsum += n;

        mloc = encontra(m,r);
        lloc = encontra(l,r);

        if(mloc < lloc)
            msum += 30;
        else if(lloc < mloc)
            lsum += 30;

        if(msum > lsum)
            cout << 'M' << endl;
        else if(lsum > msum)
            cout << 'L' << endl;
        else
            cout << 'T' << endl;
    }

    return 0;
}