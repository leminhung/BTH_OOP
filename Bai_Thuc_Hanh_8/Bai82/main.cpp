#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class SINHVIEN{
    char MaSinhVien[30];
    char TenSV[30];
    char Lop[30];
    char Khoa[30];
public:
    void Nhap();
    void Xuat();
};

void SINHVIEN::Nhap(){
    cout << "MA SINH VIEN: "; fflush(stdin); cin.getline(MaSinhVien, 30);
    cout << "TEN SINH VIEN: "; fflush(stdin); cin.getline(TenSV, 30);
    cout << "LOP: "; fflush(stdin); cin.getline(Lop, 30);
    cout << "KHOA: "; fflush(stdin); cin.getline(Khoa, 30);
}

void SINHVIEN::Xuat(){
    cout << setw(15) << "Ma sinh vien:  " << MaSinhVien << setw(15) << "Ten sinh vien:  " << TenSV << endl;
    cout << setw(15) << "Lop:           " << Lop << setw(15) << "Khoa: " << Khoa << endl;
}

class MONHOC{
    char TenMon[30];
    int SoTrinh;
    float Diem;
public:
    friend class PHIEU;
    void Nhap();
    void Xuat();
};

void MONHOC::Nhap(){
    cout << "TEN MON: "; fflush(stdin); cin.getline(TenMon, 30);
    cout << "SO TRINH: "; cin >> SoTrinh;
    cout << "DIEM: "; cin >> Diem;
}
void MONHOC::Xuat(){
    cout << setw(15) << TenMon << setw(15) << SoTrinh << setw(15) << Diem << endl;
}


class PHIEU{
    SINHVIEN SV;
    MONHOC *p;
    int n;
public:
    void Nhap();
    void Xuat();
};

void PHIEU::Nhap(){
    SV.Nhap();
    cout << "So mon hoc n = "; cin >> n;
    p = new MONHOC[n];
    for(int i=0; i<n; i++){
        p[i].Nhap();
    }
}

void PHIEU::Xuat(){
    cout << setw(40) << "PHIEU BAO DIEM" << endl;
    SV.Xuat();
    cout << "Bang diem: " << endl;
    cout << setw(15) << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem" << endl;
    int Dem_ST = 0;
    int Diem_p = 0;
    for(int i=0; i<n; i++){
        p[i].Xuat();
        Dem_ST += p[i].SoTrinh;
        Diem_p += p[i].SoTrinh * p[i].Diem;
    }
    cout << setw(50) << "Diem trung binh: " << Diem_p/Dem_ST;
}
int main()
{
    PHIEU P;
    P.Nhap();
    P.Xuat();
}
