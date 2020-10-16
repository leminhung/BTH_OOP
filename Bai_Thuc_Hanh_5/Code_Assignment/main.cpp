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
    cout << "Ma NCC:   "; fflush(stdin); gets(MANCC);
    cout << "Ten NCC:   "; fflush(stdin); gets(TENNCC);
    cout << "Dia chi:   "; fflush(stdin); gets(DC);
    cout << "SDT:   "; fflush(stdin); gets(SDT);
}

void NCC::Xuat(){
    cout << setw(19) << "Ma NCC:   " << MANCC;
    cout << setw(20) << "Ten NCC:   " << TENNCC << endl;
    cout << setw(18) << "Dia chi:   " << DC;
    cout << setw(20) << "SDT:   " << SDT << endl;
}

class SP{
    char MASP[30];
    char TENSP[30];
    int SL;
    float DONGIA;
public:
    friend void INSP(PHIEU P);
    friend void SAP(PHIEU P);
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
    cout << setw(15) << MASP << setw(15) << TENSP << setw(15) << SL << setw(15) << DONGIA
         << setw(15) << SL * DONGIA << endl;
}

class PHIEU{
    char MAPHIEU[30];
    char NGAYLAP[30];
    SP *S;
    int n;
    NCC NC;
public:
    friend void INSP(PHIEU P);
    friend void SAP(PHIEU P);
    void Nhap();
    void Xuat();
};
void PHIEU::Nhap(){
    cout << "MA PHIEU: "; fflush(stdin); gets(MAPHIEU);
    cout << "NGAY LAP: "; fflush(stdin); gets(NGAYLAP);
    NC.Nhap();
    cout << "Nhap so SP n = "; cin >> n;
    S = new SP[n];
    for(int i=0; i<n; i++){
        S[i].Nhap();
    }
}
void PHIEU::Xuat(){
    cout << "Dai hoc Victory" << endl;
    cout << setw(40) << "PHIEU NHAP VAN PHONG PHAM" << endl;
    cout << setw(20) << "Ma phieu:    " << MAPHIEU;
    cout << setw(20) << "Ngay lap:    " << NGAYLAP << endl;
    NC.Xuat();
    cout << setw(15) << "Ma SP" << setw(15) << "Ten san pham" << setw(15) << "So luong" << setw(15) << "Don gia"
         << setw(15) << "Thanh tien" << endl;
    int T = 0;
    for(int i = 0; i<n; i++){
        S[i].Xuat();
        T += S[i].DONGIA * S[i].SL;
    }
    cout << setw(50) << "TONG: " <<  setw(20) << T << endl;
    cout << setw(20) << "Hieu truong " << setw(20) << "Phong tai chinh" << setw(20) << "Nguoi lap";
}

void INSP(PHIEU P){
    int d = 0;
    for(int i=0; i<P.n; i++){
        if(P.S[i].SL < 80) d++;
    }
    if(d == 0) cout << "Khong co sp nao co SL < 80" << endl;
    else cout << "Co " << d << " SP co SL < 80" << endl;
}

void SAP(PHIEU P){
    int d = P.n - 1;
    for(int i=0; i<d; i++){
        for(int j = d; j>i; j--){
            if(P.S[j].DONGIA < P.S[j-1].DONGIA){
                swap(P.S[j], P.S[j-1]);
            }
        }
    }
}
int main()
{
    PHIEU P;
    P.Nhap();
    INSP(P);
    SAP(P);
    P.Xuat();

}
