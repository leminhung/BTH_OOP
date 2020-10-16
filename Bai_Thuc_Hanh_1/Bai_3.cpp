#include<bits/stdc++.h>
using namespace std;

class HANG{
    string MaHang;
    string TenHang;
    float DonGia;
    int SoLuong;
public:
    void nhap();
    void xuat();
};

void HANG::nhap(){
    cout << "Nhap Ma Hang: "; fflush(stdin); getline(cin,MaHang);
    cout << "Nhap Ten Hang: "; fflush(stdin); getline(cin,TenHang);
    cout << "Nhap Don Gia: "; cin >> DonGia;
    cout << "Nhap So Luong: "; cin >> SoLuong;
}
void HANG::xuat(){
    cout << setw(15) << MaHang << setw(15) << TenHang << setw(15) << DonGia << setw(15) <<
    SoLuong << setw(20) << DonGia * SoLuong << endl;
}
int main(){
    HANG *x;
    int n;
    cout << "Nhap so luong Hang: "; cin >> n;
    x = new HANG[n];

    for(int i=0; i<n; i++){
        cout << "=====Goi hang thu " << i + 1 << " ======" << endl;
        x[i].nhap();
    }

    cout << setw(15) << "Ma Hang" << setw(15) << "Ten SP" << setw(15) << "Don Gia" << setw(15) <<
    "So Luong" << setw(20) << "Thanh Tien" << endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
}

