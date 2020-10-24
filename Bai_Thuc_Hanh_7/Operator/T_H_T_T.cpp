#include<bits/stdc++.h>
#include<fstream>
using namespace std;


class PHANSO{
    float TS, MS;
public:
    friend istream& operator>>(istream& x, PHANSO &y);
    friend ostream& operator<<(ostream& x, PHANSO y);

    PHANSO operator+(PHANSO y);
    PHANSO operator-(PHANSO y);
    PHANSO operator*(PHANSO y);
    PHANSO operator/(PHANSO y);
    double operator-();
};

istream& operator>>(istream& x, PHANSO &y){
    cout << "NHAP TU SO: "; x>>y.TS;
    cout << "NHAP MAU SO: "; x>>y.MS;
    return x;
}
ostream& operator<<(ostream& x, PHANSO y){
    x << y.TS << "/" << y.MS;
    return x;
}
PHANSO PHANSO::operator+(PHANSO y){
    PHANSO z;
    z.TS = TS*y.MS + MS*y.TS;
    z.MS = MS*y.MS;
    return z;
}
PHANSO PHANSO::operator-(PHANSO y){
    PHANSO z;
    z.TS = TS*y.MS - MS*y.TS;
    z.MS = MS*y.MS;
    return z;
}
PHANSO PHANSO::operator*(PHANSO y){
    PHANSO z;
    z.TS = TS*y.TS;
    z.MS = MS*y.MS;
    return z;
}
PHANSO PHANSO::operator/(PHANSO y){
    PHANSO z;
    z.TS = TS*y.MS;
    z.MS = MS*y.TS;
    return z;
}
double PHANSO::operator-(){
    return (double)TS/MS;
}
int main(){
    PHANSO P, Q;
    cout << "====NHAP PHAN SO THU NHAT========" << endl;
    cin >> P;
    cout << "====NHAP PHAN SO THU HAI========" << endl;
    cin >> Q;

    PHANSO K = P + Q;
    PHANSO K1 = P - Q;
    PHANSO K2 = P * Q;
    PHANSO K3 = P / Q;
    ofstream f("C:\\Users\\PC\\Desktop\\hung.txt", ios::out);//use ios::app to add data
    f << P << " + " << Q << " = " << K << " = " << -K << endl;
    f << P << " - " << Q << " = " << K1 << " = " << -K1 << endl;
    f << P << " * " << Q << " = " << K2 << " = " << -K2 << endl;
    f << P << " : " << Q << " = " << K3 << " = " << -K3 << endl;
    f.close();

    ifstream f1("C:\\Users\\PC\\Desktop\\hung.txt", ios::in);
    char S[200];
    while(!f1.eof()){
        f1.getline(S, 200);
        cout << S << endl;
    }
    f1.close();
    return 0;
}
