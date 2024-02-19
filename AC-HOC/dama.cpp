#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2;
    while(true){
        cin >> x1 >> y1 >> x2 >> y2;
        int mov=0;
        if(!x1 && !x2 && !y1 && !y2) break;

        if(x1 < x2 && y1 < y2){
            //cout << "Entrou 1" << endl;
            while(x1 < x2 && y1 < y2){
                x1++;
                y1++;
            }
            mov++;
        }
        if(x1 > x2 && y1 < y2){
            //cout << "Entrou 2" << endl;
            while(x1 > x2 && y1 < y2){
                x1--;
                y1++;
            }
            mov++;
        }
        if(x1 > x2 && y1 > y2){
            //cout << "Entrou 3" << endl;
            while(x1 > x2 && y1 > y2){
                x1--;
                y1--;
            }
            mov++;
        }
        if(x1 < x2 && y1 > y2){
            //cout << "Entrou 4" << endl;
            while(x1 < x2 && y1 > y2){
                x1++;
                y1--;
            }
            mov++;
        }
        if(x1 == x2 && y1 > y2){
            //cout << "Entrou 5" << endl;
            while(x1 == x2 && y1 > y2){
                y1--;
            }
            mov++;
        }
        if(x1 == x2 && y1 < y2){
            //cout << "Entrou 6" << endl;
            while(x1 == x2 && y1 < y2){
                y1++;
            }
            mov++;
        }
        if(x1 > x2 && y1 == y2){
            //cout << "Entrou 7" << endl;
            while(x1 > x2 && y1 == y2){
                x1--;
            }
            mov++;
        }
        if(x1 < x2 && y1 == y2){
            //cout << "Entrou 8" << endl;
            while(x1 < x2 && y1 == y2){
                x1++;
            }
            mov++;
        }
        cout << mov << endl;
    }

    return 0;
}