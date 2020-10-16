#include<bits/stdc++.h>
using namespace std;

class SACH{
    string MASACH;
    string TENSACH;
    string NXB;
    int SOTRANG;
    float GIATIEN;
public:
    void nhap();
    void xuat();
};

void SACH::nhap(){
    cout << "Nhap Ma Sach: "; fflush(stdin); getline(cin,MASACH);
    cout << "Nhap Ten: "; fflush(stdin); getline(cin,TENSACH);
    cout << "Nhap NXB: "; fflush(stdin); getline(cin,NXB);
    cout << "Nhap So Trang: "; cin >> SOTRANG;
    cout << "Nhap gia tien: "; cin >> GIATIEN;
}
void SACH::xuat(){
    cout << setw(15) << MASACH << setw(15) << TENSACH << setw(15) << NXB << setw(15) <<
    SOTRANG << setw(20)<< GIATIEN << endl;
}
int main(){
    SACH *x;
    int n;
    cout << "Nhap so luong Sach: "; cin >> n;
    x = new SACH[n];

    for(int i=0; i<n; i++){
        cout << "=====Cuon Sach thu " << i + 1 << " ======" << endl;
        x[i].nhap();
    }

    cout << setw(15) << "Ma Sach" << setw(15) << "Ten Sach" << setw(15) << "NXB" << setw(15) <<
    "So Trang" << setw(20) << "Gia Tien" << endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
}

