#include<bits/stdc++.h>
using namespace std;

class TRI{
    float a, b, c;
public:
    TRI();
    TRI(float x, float y, float z);
    friend ostream& operator<<(ostream& x, TRI y);
    TRI operator-();
    TRI operator+(TRI y);
    TRI operator-(TRI y);
};

TRI::TRI(){
    a = 0;
    b = 0;
    c = 0;
}
TRI::TRI(float x, float y, float z){
    a = x;
    b = y;
    c = z;
}
ostream& operator<<(ostream& x, TRI y){
    x << y.a << "x" << char(253) << " + " << y.b << "x + " << y.c;
    return x;
}
TRI TRI::operator+(TRI y){
    TRI z;
    z.a = a + y.a;
    z.b = b + y.b;
    z.c = c + y.c;
    return z;
}
TRI TRI::operator-(TRI y){
    TRI z;
    z.a = a - y.a;
    z.b = b - y.b;
    z.c = c - y.c;
    return z;
}
TRI TRI::operator-(){
    a = -a;
    b = -b;
    c = -c;
    return *this;
}

int main(){
    TRI P(1,2,3);
    TRI Q(3,4,5);

    P = -P;
    Q = -Q;
    TRI K1 = P + Q;
    TRI K2 = P - Q;

    cout << "PRINT P: " << P << endl;
    cout << "PRINT Q: " << Q << endl;
    cout << "P + Q: " << K1 << endl;
    cout << "P - Q: " << K2 << endl;

}



















