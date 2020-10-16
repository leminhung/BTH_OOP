#include<bits/stdc++.h>
using namespace std;

class QUANLY{
    char MaQL[15];
    char HoTen[15];
public:
    void nhap();
    void xuat();
};

void QUANLY::nhap(){
    cout << "MA QL: "; fflush(stdin); gets(MaQL);
    cout << "Ho Ten: "; fflush(stdin); gets(HoTen);
}
void QUANLY::xuat(){
    cout << MaQL << endl;
    cout << HoTen << endl;
}

class MAY{
    char MaMay[15];
    char KieuMay[15];
    char TinhTrang[15];
public:
    void nhap();
    void xuat();
};

void MAY::nhap(){
    cout << "Ma may: "; fflush(stdin); gets(MaMay);
    cout << "Kieu may: "; fflush(stdin); gets(KieuMay);
    cout << "Tinh Trang: "; fflush(stdin); gets(TinhTrang);
}
void MAY::xuat(){
    cout << setw(15) << MaMay << setw(15) << KieuMay << setw(15) << TinhTrang << endl;
}


class PHONGMAY{
    char MaPhong[15];
    char TenPhong[15];
    char DienTich[15];
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
};

void PHONGMAY::nhap(){
    cout << "Ma Phong: "; fflush(stdin); gets(MaPhong);
    cout << "Ten Phong: "; fflush(stdin); gets(TenPhong);
    cout << "Dien Tich: "; fflush(stdin); gets(DienTich);
    x.nhap();
    cout << "Nhap so may n = "; cin >> n;
    y = new MAY[n];
    for(int i=0; i<n; i++){
        y[i].nhap();
    }
}

void PHONGMAY::xuat(){
    cout << "Ma Phong: " << MaPhong << endl;
    cout << "Ten Phong: " << TenPhong << endl;
    cout << "Dien Tich: " << DienTich << endl;
    x.xuat();
    cout << setw(15) << "Ma May" << setw(15) << "Kieu May" << setw(15) << "Tinh Trang" << endl;
    for(int i=0; i<n; i++){
        y[i].xuat();
    }
}

int main(){
    PHONGMAY p;
    p.nhap();
    p.xuat();
}






