#include <bits/stdc++.h>

using namespace std;

class DATE{
    int ngay;
    int thang;
    int nam;
public:
    void nhap();
    void xuat();
};
void DATE::nhap(){
    cout << "Ngay: "; cin >> ngay;
    cout << "Thang: "; cin >> thang;
    cout << "Nam: "; cin >> nam;
}
void DATE::xuat(){
    cout << setw(10) << ngay << setw(15) << thang << setw(15) << nam << endl;
}

class NHANSU{
    char maNhanSu[15];
    char hoTen[15];
    DATE NS;
public:
    void nhap();
    void xuat();
};

void NHANSU::nhap(){
    cout << "Ma nhan su: "; fflush(stdin); gets(maNhanSu);
    cout << "Ten nhan su: "; fflush(stdin); gets(hoTen);
    NS.nhap();
}

void NHANSU::xuat(){
    cout << setw(10) << "Ma NS" << setw(15) << "HoTen" <<
    setw(10) << "Ngay" << setw(15) << "Thang" << setw(15) << "Nam" << endl;
    cout << setw(10) << maNhanSu << setw(15) << hoTen;
    NS.xuat();
}

int main()
{
    NHANSU x;
    x.nhap();
    x.xuat();
}
