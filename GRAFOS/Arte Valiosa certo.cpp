#include <bits/stdc++.h>

using namespace std;


class UnionFind {
private:
    vector<int> p, rank , setSize;
    int numSets;
public:
    UnionFind(int N) {
        setSize.assign(N, 1);
        numSets = N;
        rank.assign(N, 0);
        p.assign(N, 0);
        for (int i = 0; i < N; i++) p[i] = i;
    }

    int findSet(int i) {
        return (p[i] == i) ? i : (p[i] = findSet(p[i])); 
    }

    bool isSameSet(int i, int j) {
        return findSet(i) == findSet(j); 
    }

    void unionSet(int i, int j) {
        if (! isSameSet(i, j)) {
            numSets --;
            int x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y]) {
                p[y] = x; setSize[x] += setSize[y]; 
            }
            else {
                p[x] = y; setSize[y] += setSize[x];

                if (rank[x] == rank[y]) rank[y]++;
            }
        }
    }
    int numDisjointSets () { 
        return numSets; 
    }

    int sizeOfSet(int i) { 
        return setSize[findSet(i)];
    }
};

double dist(int p1[3], int p2[3]){
    return sqrt(pow(p1[0]-p2[0],2) + pow(p1[1]-p2[1],2));
}


int main(){
    int m,n,k;
    int sensors[1000][3];

    cin >> m >> n >> k;

    auto union_find = UnionFind(k+4);

    for(int i=0;i<k;i++){
        int x,y,z;
        cin >> x >> y >> z;

        sensors[i][0] = x;
        sensors[i][1] = y;
        sensors[i][2] = z;

        if(sensors[i][1] + sensors[i][2] >= n)
            union_find.unionSet(0, i+4);

        if(sensors[i][0] + sensors[i][2] >= m)
            union_find.unionSet(1, i+4);
        
        if(sensors[i][1] - sensors[i][2] <= 0)
            union_find.unionSet(2, i+4);
        if(sensors[i][0] - sensors[i][2] <= 0)
            union_find.unionSet(3, i+4);
    }

    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(dist(sensors[i],sensors[j]) <= sensors[i][2] + sensors[j][2])
                union_find.unionSet(i+4,j+4);
        }
    }

    if(union_find.isSameSet(0,1) || union_find.isSameSet(0,2) || union_find.isSameSet(3,2) || union_find.isSameSet(3,1))
        cout << "N\n";
    else
        cout << "S\n";


}