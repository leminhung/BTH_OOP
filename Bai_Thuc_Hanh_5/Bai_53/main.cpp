#include <bits/stdc++.h>

using namespace std;


class VEHICLE{
protected:
    char NHANHIEU[30];
    int NAM;
    char HANG[30];
public:
    void Nhap();
    void Xuat();
};
void VEHICLE::Nhap(){
    cout << "NHAN HIEU: "; fflush(stdin); gets(NHANHIEU);
    cout << "NAM: "; cin >> NAM;
    cout << "HANG"; fflush(stdin); gets(HANG);
}
void VEHICLE::Xuat(){
    cout << "NHAN HIEU: " << NHANHIEU << endl;
    cout << "NAM: " << NAM << endl;
    cout << "HANG" << HANG << endl;
}

class OTO : public VEHICLE{
    int SOCHONGOI;
    float DUNGTICH;
public:
    void Nhap();
    void Xuat();
};

void OTO::Nhap(){
    VEHICLE::Nhap();
    cout << "SO CHO NGOI: "; cin >> SOCHONGOI;
    cout << "DUNG TICH: "; cin >> DUNGTICH;
}

void OTO::Xuat(){
    VEHICLE::Xuat();
    cout << "SO CHO NGOI: " <<  SOCHONGOI << endl;
    cout << "DUNG TICH: " << DUNGTICH << endl;
}

class MOTO : public VEHICLE{
    int PHANKHOI;
public:
    void Nhap();
    void Xuat();
};

void MOTO::Nhap(){
    VEHICLE::Nhap();
    cout << "PHAN KHOI: "; cin >> PHANKHOI;
}
void MOTO::Xuat(){
    VEHICLE::Xuat();
    cout << "PHAN KHOI: " << PHANKHOI << endl;
}
int main()
{
    OTO O;
    O.Nhap();
    O.Xuat();
    cout << endl;
     MOTO M;
     M.Nhap();
     M.Xuat();
}












