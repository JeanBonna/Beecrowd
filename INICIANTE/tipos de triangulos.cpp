#include<bits/stdc++.h>

using namespace std;

inline bool desc(int a,int b){
    return a>b;
}

int main(){
    double x;
    vector<double>num;
    for(int i=0;i<3;i++){
        cin >> x;
        num.push_back(x);
    }
    sort(num.begin(),num.end(),desc);
    double a=num[0],b=num[1],c=num[2];

    if(a >= (b+c))
        cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if(a*a == b*b + c*c) cout << "TRIANGULO RETANGULO" << endl;
        if(a*a > b*b + c*c) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a*a < b*b + c*c) cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && a == c) cout << "TRIANGULO EQUILATERO" << endl;
        if((a == b && a != c) || (b == c && b != a) || (c==a && c !=b))
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}