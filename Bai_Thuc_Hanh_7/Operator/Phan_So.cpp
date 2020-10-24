#include<bits/stdc++.h>
using namespace std;


class PHANSO{
    float TS, MS;
public:
    void Nhap();
    void Xuat();
    PHANSO operator+(PHANSO y);
    PHANSO operator-();
    float operator!();
};

void PHANSO::Nhap(){
    cout << "TU SO: "; cin >> TS;
    cout << "MAU SO: "; cin >> MS;
}
void PHANSO::Xuat(){
    cout << "=========PHAN SO========" << endl;
    cout << TS << "/" << MS << endl;
}

PHANSO PHANSO::operator+(PHANSO y){
    PHANSO z;
    z.TS = TS*y.MS + MS*y.TS;
    z.MS = MS*y.MS;
    return z;
}
PHANSO PHANSO::operator-(){
    TS = -TS;
    MS = MS;
    return *this;
}
float PHANSO::operator!(){
    return TS/MS;
}
int main(){
    PHANSO P, Q;
    P.Nhap(); Q.Nhap();
    P.Xuat(); Q.Xuat();

    PHANSO K = P + Q;
    K.Xuat();

    K = -K;
    K.Xuat();

    cout << "GIA TRI CUA PHAN SO: " << !K << endl;
}
