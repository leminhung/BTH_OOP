#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NCC{
    char MANCC[30];
    char TENNCC[30];
    char DC[30];
    char SDT[30];
public:
    void Nhap();
    void Xuat();
};

void NCC::Nhap(){
    cout << "MA NCC: "; fflush(stdin); gets(MANCC);
    cout << "TEN NCC: "; fflush(stdin); gets(TENNCC);
    cout << "DC NCC: "; fflush(stdin); gets(DC);
    cout << "SDT NCC: "; fflush(stdin); gets(SDT);
}
void NCC::Xuat(){
    cout << setw(25) << "Ma nha cung cap:   " << MANCC << setw(25) <<
    "Ten nha cung cap:   "<< TENNCC << endl;
    cout << setw(25) << "Dia chi:   " << DC << setw(25) << "SDT" <<
    SDT << endl;
}

class SP{
    char MASP[30];
    char TENSP[30];
    int SL;
    float DONGIA;
public:
    friend void SAP(PHIEU P);
    friend void INDS(PHIEU P);
    friend class PHIEU;
    void Nhap();
    void Xuat();
};

void SP::Nhap(){
    cout << "MA SP: "; fflush(stdin); gets(MASP);
    cout << "TEN SP: "; fflush(stdin); gets(TENSP);
    cout << "SL: "; cin >> SL;
    cout << "DON GIA: "; cin >> DONGIA;
}

void SP::Xuat(){
    cout << setw(15) << MASP << setw(15) << TENSP << setw(15) << SL <<
    setw(15) << DONGIA << setw(15) << SL * DONGIA << endl;
}

class PHIEU{
    char MAPHIEU[30];
    char NGAYLAP[30];
    NCC NC;
    SP *Sp;
    int n;
public:
    friend void SAP(PHIEU P);
    friend void INDS(PHIEU P);
    void Nhap();
    void Xuat();
};

void PHIEU::Nhap(){
    cout << "MA PHIEU: "; fflush(stdin); gets(MAPHIEU);
    cout << "NGAY LAP: "; fflush(stdin); gets(NGAYLAP);
    NC.Nhap();
    cout << "Nhap so luong mat hang n = "; cin >> n;
    Sp = new SP[n];
    for(int i=0; i<n; i++){
        Sp[i].Nhap();
    }
}

void PHIEU::Xuat(){
    cout << setw(15) << "Dai hoc Victory" << endl;
    cout << setw(40) << "PHIEU NHAP VAN PHONG PHAM " << endl;
    cout << setw(15) << "Ma phieu:      " << MAPHIEU << setw(15) <<
    "Ngay lap:  " << NGAYLAP << endl;
    NC.Xuat();
    cout << setw(15) << "Ma SP" << setw(15) << "Ten SP" << setw(15) << "So luong" <<
    setw(15) << "Don gia" << setw(15) << "Thanh tien" << endl;
    float k = 0;
    for(int i=0; i<n; i++){
        Sp[i].Xuat();
        k += Sp[i].SL * Sp[i].DONGIA;
    }
    cout << setw(40) << "TONG                     " << k << endl;
    cout << "        Hieu truong" << "        Phong tai chinh" << "      Nguoi lap" << endl;


}

void INDS(PHIEU P){
    int d = 0;
    for(int i=0; i<P.n; i++){
        if(P.Sp[i].SL < 80) d++;
    }
    cout << "So sp co SL nhap < 80 la: " << d << endl;
}

void SAP(PHIEU P){
    int n = P.n;
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if(P.Sp[j].DONGIA < P.Sp[j-1].DONGIA){
                swap(P.Sp[j], P.Sp[j-1]);
            }
        }
    }
}
int main()
{
    PHIEU P;
    P.Nhap();
    P.Xuat();
    INDS(P);
    SAP(P);
    P.Xuat();
}
