#include <bits/stdc++.h>

using namespace std;

class NHANVIEN
{
    char HOTENNV[20];
    char CHUCVUNV[20];
public:
    void NHAP();
    void XUAT();
};
class PHONG
{
    char MAPH[20];
    char TENPH[20];
    char TRUONGPH[20];
public:
    void NHAP();
    void XUAT();
};
class TAISAN
{
    char TENTS[20];
    int SOLUONGTS;
    char TINHTRANGTS[20];
public:
    void NHAP();
    void XUAT();
    friend class PHIEUKIEMKE;
};
class PHIEUKIEMKE
{
    char MAPH[20];
    char NGAYKK[20];
    NHANVIEN x;
    PHONG y;
    TAISAN *z;
    int n;
public:
    void NHAP();
    void XUAT();
};
void NHANVIEN::NHAP()
{
    cout<<"Ho ten: ";
    fflush(stdin);
    gets(HOTENNV);
    cout<<"Chuc vu: ";
    fflush(stdin);
    gets(CHUCVUNV);
}
void NHANVIEN::XUAT()
{
    cout<<"Nhan vien kiem ke: "<<HOTENNV<<"\t"<<"Chuc vu: "
        <<CHUCVUNV<<endl;
}
void PHONG::NHAP()
{
    cout<<"Ma phong: ";
    fflush(stdin);
    gets(MAPH);
    cout<<"Ten phong:";
    fflush(stdin);
    gets(TENPH);
    cout<<"Truong phong: ";
    fflush(stdin);
    gets(TRUONGPH);
}
void PHONG::XUAT()
{
    cout<<"Kiem ke tai phong: "<<TENPH<<"\t"<<"Ma phong: "
        <<MAPH<<endl;
    cout<<"Truong phong: "<<TRUONGPH<<endl;
}
void TAISAN::NHAP()
{
    cout<<"Ten tai san: ";
    fflush(stdin);
    gets(TENTS);
    cout<<"So luong: ";
    cin>>SOLUONGTS;
    cout<<"Tinh trang: ";
    fflush(stdin);
    gets(TINHTRANGTS);
}
void TAISAN::XUAT()
{
    cout<<setw(20)<<TENTS<<setw(20)<<SOLUONGTS<<setw(20)<<TINHTRANGTS
        <<endl;
}
void PHIEUKIEMKE::NHAP()
{
    cout<<"Ma phieu: ";
    fflush(stdin);
    gets(MAPH);
    cout<<"Ngay kiem ke: ";
    fflush(stdin);
    gets(NGAYKK);
    x.NHAP();
    y.NHAP();
    cout<<"Nhap so tai san kiem ke: ";
    cin>>n;
    z=new TAISAN[n];
    for(int i=0; i<n; i++)
        z[i].NHAP();
}
void PHIEUKIEMKE::XUAT()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu: "<<MAPH<<"\t"<<"Ngay kiem ke: "<<NGAYKK<<endl;
    x.XUAT();
    y.XUAT();
    cout<<setw(20)<<"TEN TS"<<setw(20)<<"SO LUONG"<<setw(20)
        <<"TINH TRANG"<<endl;
    for(int i=0; i<n; i++)
        z[i].XUAT();
    int TONGSL=0;
    for(int i=0; i<n; i++)
        TONGSL += z[i].SOLUONGTS;
    cout<<"So tai san kiem ke: "<<n<<"\t"<<". Tong so luong: "
        <<TONGSL<<endl;
}
int main()
{
    PHIEUKIEMKE a;
    a.NHAP();
    a.XUAT();
    return 0;
}
