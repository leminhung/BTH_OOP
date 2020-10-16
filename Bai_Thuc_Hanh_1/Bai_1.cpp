#include<bits/stdc++.h>
using namespace std;

class SINHVIEN{
    string MASV;
    string HOTEN;
    int TUOI;
    float DIEM;
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap(){
    cout << "Nhap MSV: "; fflush(stdin); getline(cin,MASV);
    cout << "Nhap Ho Va Ten: "; fflush(stdin); getline(cin,HOTEN);
    cout << "Nhap tuoi: "; cin >> TUOI;
    cout << "Nhap diem: "; cin >> DIEM;
}
void SINHVIEN::xuat(){
    cout << setw(15) << MASV << setw(15) << HOTEN << setw(15) << TUOI << setw(15) <<
    DIEM << endl;
}
int main(){
    SINHVIEN *x;
    int n;
    cout << "Nhap so luong SV: "; cin >> n;
    x = new SINHVIEN[n];

    for(int i=0; i<n; i++){
        cout << "=====Sinh vien thu " << i + 1 << " ======" << endl;
        x[i].nhap();
    }

    cout << setw(15) << "MASV" << setw(15) << "Ho va Ten" << setw(15) << "Tuoi" << setw(15) <<
    "Diem" << endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
}
