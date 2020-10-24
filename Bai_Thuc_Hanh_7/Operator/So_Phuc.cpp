#include<bits/stdc++.h>
using namespace std;

class SPHUC{
    float P_THUC, P_AO;
public:
    SPHUC();
    SPHUC(float x1, float y1);
    friend ostream& operator<<(ostream& x, SPHUC &y);
    SPHUC operator+(SPHUC y);
    SPHUC operator-(SPHUC y);
};

SPHUC::SPHUC(){
    P_THUC = 0;
    P_AO = 0;
}
SPHUC::SPHUC(float x1, float y1){
    P_THUC = x1;
    P_AO = y1;
}

ostream& operator<<(ostream& x, SPHUC &y){
    x << y.P_THUC << " + i*" << y.P_AO;
}

SPHUC SPHUC::operator+(SPHUC y){
    SPHUC z;
    z.P_THUC = P_THUC + y.P_THUC;
    z.P_AO = P_AO + y.P_AO;
    return z;
}

SPHUC SPHUC::operator-(SPHUC y){
    SPHUC z;
    z.P_THUC = P_THUC - y.P_THUC;
    z.P_AO = P_AO - y.P_AO;
    return z;
}
int main(){
    SPHUC P(3,5) , Q(4,6);
    cout << "======HIEN THI======" << endl;
    cout << P << endl;
    cout << Q << endl;

    SPHUC K = P + Q;
    SPHUC K1 = P - Q;

    cout << K << endl;
    cout << K1 << endl;
}
