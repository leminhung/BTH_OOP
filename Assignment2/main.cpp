#include <bits/stdc++.h>

using namespace std;

class LOPHOC;
class NGUOI{
protected:
    char HOTEN[30];
    char NGAYSINH[30];
    char QUEQUAN[30];
public:
    void Nhap();
    void Xuat();
};
void NGUOI::Nhap(){
    cout << "HO TEN: "; fflush(stdin); gets(HOTEN);
    cout << "NGAY SINH: "; fflush(stdin); gets(NGAYSINH);
    cout << "QUE QUAN: "; fflush(stdin); gets(QUEQUAN);
};
void NGUOI::Xuat(){
    cout << "HO TEN: " << HOTEN << endl;
    cout << "NGAY SINH: " << NGAYSINH << endl;
    cout << "QUE QUAN: " << QUEQUAN << endl;
}
class SINHVIEN : public NGUOI{
    char MSV[30];
    char NGANH[30];
    int KHOAHOC;
public:
    friend void Sap(LOPHOC L);
    friend void PrintInfor(LOPHOC L);
    friend class LOPHOC;
    void Nhap();
    void Xuat();
};
void SINHVIEN::Nhap(){
    NGUOI::Nhap();
    cout << "MSV: "; fflush(stdin); gets(MSV);
    cout << "NGANH: "; fflush(stdin); gets(NGANH);
    cout << "KHOA HOC: "; cin >> KHOAHOC;
}

void SINHVIEN::Xuat(){
    NGUOI::Xuat();
    cout << "MSV: " << MSV << endl;
    cout << "NGANH: " << NGANH << endl;
    cout << "KHOA HOC: " << KHOAHOC << endl;
}

class LOPHOC{
    char MALH[30];
    char TENLH[30];
    char NGAYMO[30];
    SINHVIEN *x;
    int n;
    char TENGV[30];
public:
    friend void Sap(LOPHOC L);
    friend void PrintInfor(LOPHOC L);
    void Nhap();
    void Xuat();
};

void LOPHOC::Nhap(){
    cout << "============XUAT THONG TIN LOP HOC============" << endl;
    cout << "MA LOP HOC: "; fflush(stdin); gets(MALH);
    cout << "TEN LOP HOC: "; fflush(stdin); gets(TENGV);
    cout << "NGAY MO: "; fflush(stdin); gets(NGAYMO);
    cout << "Nhap so SV trong lop n = "; cin >> n;
    x = new SINHVIEN[n];
    for(int i=0; i<n; i++){
        x[i].Nhap();
    }
    cout << "TEN GV: "; fflush(stdin); gets(TENGV);
}
void LOPHOC::Xuat(){
    cout << "============XUAT THONG TIN LOP HOC============" << endl;
    cout << "MA LOP HOC: " << MALH << endl;
    cout << "TEN LOP HOC: " << TENGV << endl;
    cout << "NGAY MO: " << NGAYMO << endl;
    for(int i=0; i<n; i++){
        x[i].Xuat();
    }
    cout << "TEN GV: " << TENGV << endl;
}
void PrintInfor(LOPHOC L){
    int d = 0;
    for(int i = 0; i<L.n; i++){
        if(L.x[i].KHOAHOC == 11){
            d++;
        }
    }
    cout << "***********Co " << d << " SV khoa K11************" << endl;
}
void Sap(LOPHOC L){
    for(int i = 0; i<L.n-1; i++){
        for(int j=L.n-1; j > i; j--)
        if(L.x[j].KHOAHOC < L.x[j-1].KHOAHOC){
            SINHVIEN k = L.x[j];
            L.x[j] = L.x[j-1];
            L.x[j-1] = k;
        }
    }
}
int main()
{
    LOPHOC L;
    L.Nhap();
    L.Xuat();
    PrintInfor(L);
    Sap(L);
    L.Xuat();
}
