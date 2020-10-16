#include <bits/stdc++.h>

using namespace std;

class NSX{
    char maNSX[15];
    char tenNSX[15];
    char dCNSX[15];
public:
    void nhap();
    void xuat();
};
void NSX::nhap(){
    cout << "Ma SX: "; fflush(stdin); gets(maNSX);
    cout << "Ten SX: "; fflush(stdin); gets(tenNSX);
    cout << "DCN SX: "; fflush(stdin); gets(dCNSX);
}
void NSX::xuat(){
    cout << setw(10) << maNSX << setw(15) << tenNSX << setw(15) << dCNSX << endl;
}

class HANG{
    char maHANG[15];
    char tenHang[15];
    NSX NS;
public:
    void nhap();
    void xuat();
};

void HANG::nhap(){
    cout << "Ma hang: "; fflush(stdin); gets(maHANG);
    cout << "Ten hang: "; fflush(stdin); gets(tenHang);
    NS.nhap();
}

void HANG::xuat(){
    cout << setw(10) << "Ma Hang" << setw(15) << "Ten Hang" <<
    setw(10) << "Nguoi SX" << setw(15) << "Ten NSX" << setw(15) << "DCNSX" << endl;
    cout << setw(10) << maHANG << setw(15) << tenHang;
    NS.xuat();
}

int main()
{
    HANG x;
    x.nhap();
    x.xuat();
}

