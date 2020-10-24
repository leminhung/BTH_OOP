#include <bits/stdc++.h>

using namespace std;

class REC{
    float a, b, c;
public:
    void Nhap();
    void Xuat();
    REC operator+(REC y);
    float operator--();
};

void REC::Nhap(){
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
}
void REC::Xuat(){
    cout << "=========Cac canh=========" << endl;
    cout << a << " " << b << " " << c << endl;
}

REC REC::operator+(REC y){
    REC z;
    z.a = a + y.a;
    z.b = b + y.b;
    z.c = c + y.c;
    return z;
}
float REC::operator--(){
    float p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    REC P, Q;
    P.Nhap(); Q.Nhap();
    P.Xuat(); Q.Xuat();
    REC K = P + Q;
    K.Xuat();
    cout << "DT = " << --K;

}
