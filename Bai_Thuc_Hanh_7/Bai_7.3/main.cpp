#include <bits/stdc++.h>

using namespace std;


class TRUONG{
protected:
    char MATRUONG[30];
    char TENTRUONG[30];
    char DIACHI[30];
public:
    void Nhap();
    void Xuat();
};

void TRUONG::Nhap(){
    cout << "MA TRUONG: "; fflush(stdin); gets(MATRUONG);
    cout << "TEN TRUONG: "; fflush(stdin); gets(TENTRUONG);
    cout << "DIA CHI: "; fflush(stdin); gets(DIACHI);
}
void TRUONG::Xuat(){
    cout << "MA TRUONG: " << MATRUONG << endl;
    cout << "TEN TRUONG: " << TENTRUONG << endl;
    cout << "DIA CHI: " << DIACHI << endl;
}

class KHOA{
    char MAKHOA[30];
    char TENKHOA[30];
    char TRUONGKHOA[30];
public:
    friend class DAIHOC;
};
class BAN{
    char MABAN[30];
    char TENBAN[30];
    char NGAYTL[30];
public:
    friend class DAIHOC;
};

class DAIHOC: public TRUONG{
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void Nhap();
    void Xuat();
};
void DAIHOC::Nhap(){
    TRUONG::Nhap();
    cout << "Nhap so khoa cua truong n = "; cin >> n;
    x = new KHOA[n];
    for(int i=0; i<n; i++){
        cout << "MA KHOA: "; fflush(stdin); gets(x[i].MAKHOA);
        cout << "TEN KHOA: "; fflush(stdin); gets(x[i].TENKHOA);
        cout << "TRUONG KHOA: "; fflush(stdin); gets(x[i].TRUONGKHOA);
    }
    cout << "Nhap so ban cua truong m = "; cin >> m;
    y = new BAN[m];
    for(int i=0; i<m; i++){
        cout << "MA BAN: "; fflush(stdin); gets(y[i].MABAN);
        cout << "TEN BAN: "; fflush(stdin); gets(y[i].TENBAN);
        cout << "NGAY THANH LAP: "; fflush(stdin); gets(y[i].NGAYTL);
    }
}
void DAIHOC::Xuat(){
    TRUONG::Xuat();
    cout << "================HIEN THI CAC KHOA CUA TRUONG=====================" << endl;
    for(int i=0; i<n; i++){
        cout << "  MA KHOA: " << x[i].MAKHOA << endl;
        cout << "  TEN KHOA: " << x[i].TENKHOA << endl;
        cout << "  TRUONG KHOA: " << x[i].TRUONGKHOA << endl;
    }
    cout << "================HIEN THI CAC BAN CUA TRUONG=====================" << endl;
    for(int i=0; i<m; i++){
        cout << "  MA BAN: " << y[i].MABAN << endl;
        cout << "  TEN BAN: " << y[i].TENBAN << endl;
        cout << "  NGAY THANH LAP: " << y[i].NGAYTL << endl;
    }
}
int main()
{
    DAIHOC DH;
    DH.Nhap();
    DH.Xuat();
}
