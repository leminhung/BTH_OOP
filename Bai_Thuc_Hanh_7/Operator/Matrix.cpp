#include<bits/stdc++.h>
using namespace std;

class MATRIX{
    int m, n;
    double **a;
public:
    friend istream& operator>>(istream& x, MATRIX &y);
    friend ostream& operator<<(ostream& x, MATRIX y);
    MATRIX operator+(MATRIX y);
    MATRIX operator-(MATRIX y);
    MATRIX operator-();
};

istream& operator>>(istream& x, MATRIX &y){
    cout << "SO HANG n = "; x>>y.n;
    cout << "SO COT m = "; x>>y.m;
    y.a = new double*[y.n];
    for(int i=0; i<y.n; i++){
        y.a[i] = new double[y.m];
        for(int j=0; j<y.m; j++){
            x >> y.a[i][j];
        }
    }
    return x;
}
ostream& operator<<(ostream& x, MATRIX y){
    for(int i=0; i<y.n; i++){
        for(int j=0; j<y.m; j++){
            x << y.a[i][j] << "  ";
        }
        x << endl;
    }
    return x;
}
MATRIX MATRIX::operator+(MATRIX y){
    MATRIX z;
    if(n == y.n and m == y.m){
        z.n = n;
        z.m = m;
        z.a = new double*[n];
        for(int i = 0; i<n; i++){
            z.a[i] = new double[m];
            for(int j=0; j<m; j++){
                z.a[i][j] = a[i][j] + y.a[i][j];
            }
        }
    }
    else{
        cout << "The size() of 2 MATRIX DIFFERENCE" << endl;
        z.a = NULL;
        z.n = z.m = 0;
    }
    return z;
}

MATRIX MATRIX::operator-(MATRIX y){
    MATRIX z;
    if(n == y.n and m == y.m){
        z.n = n;
        z.m = m;
        z.a = new double*[n];
        for(int i = 0; i<n; i++){
            z.a[i] = new double[m];
            for(int j=0; j<m; j++){
                z.a[i][j] = a[i][j] - y.a[i][j];
            }
        }
    }
    else{
        cout << "The size() of 2 MATRIX DIFFERENCE" << endl;
        z.a = NULL;
        z.n = z.m = 0;
    }
    return z;
}
MATRIX MATRIX::operator-(){
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            a[i][j] = -a[i][j];
        }
    }
    return *this;
}
int main(){
    MATRIX P, Q;
    cout << "======INPUT MATRIX P=======" << endl;
    cin >> P;
    cout << "======INPUT MATRIX P=======" << endl;
    cin >> Q;
    P = -P;
    Q = -Q;
    cout << "=============INPUT P AFTER CHANGING========" << endl;
    cout << P;
    cout << "=============INPUT Q AFTER CHANGING========" << endl;
    cout << Q;

    MATRIX K = P + Q;
    MATRIX K1 = P - Q;

    cout << "==========TOTAL 2 MATRICES==========" << endl;
    cout << K;
    cout << "==========DIFFERENCE 2 MATRICES==========" << endl;
    cout << K1;




}

