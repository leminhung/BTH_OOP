#include <bits/stdc++.h>

using namespace std;

class PS{
    float TS, MS;
public:
    PS();
    PS(float t, float m);
    friend istream& operator>>(istream& x, PS &y);
    friend ostream& operator<<(ostream& x, PS y);
    PS operator*(PS y);
    float operator-();
};
PS::PS(){
    TS = 0;
    MS = 1;
}
PS::PS(float t, float m){
    TS = t;
    MS = m;
}
istream& operator>>(istream& x, PS &y){
    cout << "Nhap TS: "; x>>y.TS;
    cout << "Nhap MS: "; x>>y.MS;
    return x;
}
ostream& operator<<(ostream& x, PS y){
    x << y.TS << "/" << y.MS;
    return x;
}
PS PS::operator*(PS y){
    PS z;
    z.TS = TS * y.TS;
    z.MS = MS * y.MS;
    return z;
}
float PS::operator-(){
    return TS/MS;
}
int main()
{
    PS P(1, 2);
    PS Q(3, 4);
    PS M = Q * P;
    ofstream f("C:/Users/PC/Desktop/PHANSO.txt", ios::out);
    f << P << " * " << Q << " = " << M << " = "<< -M << endl;
    f.close();
}
