#include <bits/stdc++.h>

using namespace std;

class TTB2{
    float a, b, c;
public:
    void Nhap();
    void Xuat();
    TTB2 operator+(TTB2 y);
    TTB2 operator-();
    float operator++();
};
void TTB2::Nhap(){
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
}
void TTB2::Xuat(){
    cout << a << "x" << (char)253 << " + " << b << "x + " << c << endl;
}
TTB2 TTB2::operator+(TTB2 y){
    TTB2 z;
    z.a = a + y.a;
    z.b = b + y.b;
    z.c = c + y.c;
    return z;
}
TTB2 TTB2::operator-(){
    a = -a;
    b = -b;
    c = -c;
    return *this;
}
float TTB2::operator++(){
    return a + b + c;
}
int main()
{
    TTB2 P, Q;
    P.Nhap(); Q.Nhap();
    P.Xuat(); Q.Xuat();
    TTB2 K = P + Q;
    K.Xuat();
    K = -K;
    K.Xuat();
    cout << "TONG HS = " << ++K << endl;
}
