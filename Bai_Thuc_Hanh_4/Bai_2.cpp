#include<bits/stdc++.h>
using namespace std;

class NSX{
    char maNSX[20];
    char tenNSX[20];
    char dCNSX[20];
    friend class HANG;
};

class HANG{
    char maHang[20];
    char tenHang[20];
    float donGia;
    float trongLuong;
    NSX x;

public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout << "Ma Hang: "; fflush(stdin); gets(maHang);
    cout << "Ten Hang: "; fflush(stdin); gets(tenHang);
    cout << "Don Gia: "; cin >> donGia;
    cout << "Trong Luong: "; cin >> trongLuong;
    cout << "Ma NSX: "; fflush(stdin); gets(x.maNSX);
    cout << "Ten NSX: "; fflush(stdin); gets(x.tenNSX);
    cout << "DC NSX: "; fflush(stdin); gets(x.dCNSX);
}
void HANG::xuat(){
    cout << setw(20) << maHang << setw(15) << tenHang << setw(15) << donGia << setw(15) << trongLuong
         << setw(15) << x.maNSX << setw(15) << x.tenNSX << setw(15) << x.dCNSX << endl;
}

int main(){
    HANG h;
    h.nhap();
    h.xuat();
}
