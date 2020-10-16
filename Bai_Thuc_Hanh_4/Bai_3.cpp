#include<bits/stdc++.h>
using namespace std;

class HANG;
class DATE{
    int ngay;
    int thang;
    int nam;
    friend void printInf(HANG *a, int n);
    friend class HANG;
};

class HANG{
    char maHang[15];
    char tenHang[15];
    DATE ngaySX;

public:
    void nhap();
    void xuat();
    friend void printInf(HANG *a, int n);
};

void HANG::nhap(){
    cout << "Ma Hang: "; fflush(stdin); gets(maHang);
    cout << "Ten Hang: "; fflush(stdin); gets(tenHang);
    cout << "Ngay: "; cin >> ngaySX.ngay;
    cout << "Thang: "; cin >> ngaySX.thang;
    cout << "Nam: "; cin >> ngaySX.nam;
}
void printInf(HANG *a, int n){
    for(int i =0; i<n; i++){
        if(a[i].ngaySX.nam == 2017){
            cout << setw(15) << a[i].maHang << setw(15) << a[i].tenHang << setw(15) << a[i].ngaySX.ngay
                 << setw(15) << a[i].ngaySX.thang << setw(15) << a[i].ngaySX.nam << endl;
        }
    }

}
int main(){
    HANG *x;
    int n;
    cout << "Nhap so mat hang n = "; cin >> n;
    x = new HANG[n];
    cout << "===========Nhap Thong Tin Cac Mat Hang===========" << endl;
    for(int i=0; i<n; i++){
        x[i].nhap();
    }
    cout << "===========Xuat Thong Tin Cac Mat Hang Nam SX Nam 2017===========" << endl;
    cout << setw(15) << "Ma Hang" << setw(15) << "Ten Hang" << setw(15) << "Ngay"
         << setw(15) << "Thang" << setw(15) << "Nam" << endl;
    printInf(x, n);

}
