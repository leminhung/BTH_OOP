#include<bits/stdc++.h>
using namespace std;

class HANG{
    char maHang[15];
    char tenHang[15];
    float donGia;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout << "Ma Hang: "; fflush(stdin); gets(maHang);
    cout << "Ten Hang: "; fflush(stdin); gets(tenHang);
    cout << "Don Gia: "; cin >> donGia;
}
void HANG::xuat(){
    cout << setw(15) << maHang << setw(15) << tenHang << setw(15) << donGia << endl;
}

class PHIEU{
    char maPhieu[15];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap(){
    cout << "Ma Phieu: "; fflush(stdin); gets(maPhieu);
    cout << "Nhap so luong hang: "; cin >> n;
    x = new HANG[n];
    for(int i=0; i<n; i++){
        x[i].nhap();
    }
}

void PHIEU::xuat(){
    cout << "Ma Phieu: ";
    cout << maPhieu << endl;
    cout << setw(15) << "Ma Hang" << setw(15) << "Ten Hang" << setw(15)
    << "Don Gia" << endl;
    for(int i=0; i<n; i++){
        x[i].xuat();
    }
}
int main(){
    PHIEU p;
    p.nhap();
    p.xuat();
}










