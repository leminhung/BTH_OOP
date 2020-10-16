#include<bits/stdc++.h>
using namespace std;

class DoanhNghiep{
    char tenDoanhNghiep[20];
    char diaChiDN[20];
    int soNhanVien;
    float doanhThu;
public:
    void nhap();
    void xuat();
};

void DoanhNghiep::nhap(){
    cout << "Ten DN: "; fflush(stdin); gets(tenDoanhNghiep);
    cout << "Dia Chi DN: "; fflush(stdin); gets(diaChiDN);
    cout << "So Nhan Vien: "; cin >> soNhanVien;
    cout << "Doanh Thu: "; cin >> doanhThu;
}

void DoanhNghiep::xuat(){
    cout << setw(20) << tenDoanhNghiep << setw(20) << diaChiDN
         << setw(15) << soNhanVien << setw(15) << doanhThu << endl;
}
int main(){
    DoanhNghiep *x;
    int n;
    cout << "Nhap so doanh nghiep n = "; cin >> n;
    x = new DoanhNghiep[n];
    for(int i=0; i<n; i++){
        x[i].nhap();
    }
    cout << setw(20) << "Ten DN" << setw(20) << "DCDN"
         << setw(15) << "So NV" << setw(15) << "Doanh Thu" << endl;
    for(int i=0; i<n; i++){
        x[i].xuat();
    }

}








