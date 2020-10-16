#include <bits/stdc++.h>

using namespace std;


class PRINTER{
protected:
    float TRONGLUONG;
    char HANGSX[30];
    int NAMSX;
    int TOCDO;
};
class DOTPRINTER: public PRINTER{
    int MATDOKIM;
public:
    void Nhap();
    void Xuat();
};

void DOTPRINTER::Nhap(){
    cout << "TRONG LUONG: "; cin >> TRONGLUONG;
    cout << "HANG SX: "; fflush(stdin); gets(HANGSX);
    cout << "NAM SX: "; cin >> NAMSX;
    cout << "TOC DO(so trang / phut):"; cin >> TOCDO;
    cout << "MAT DO KIM: "; cin >> MATDOKIM;
}
void DOTPRINTER::Xuat(){
    cout << "TRONG LUONG: " << TRONGLUONG << endl;
    cout << "HANG SX: " << HANGSX << endl;
    cout << "NAM SX: " << NAMSX << endl;
    cout << "TOC DO(so trang / phut):" << TOCDO << endl;
    cout << "MAT DO KIM: " << MATDOKIM << endl;
}

class LASERPRINTER : public PRINTER{
    int DOPHANGIAI;
public:
    void Nhap();
    void Xuat();
};

void LASERPRINTER::Nhap(){
    cout << "TRONG LUONG: "; cin >> TRONGLUONG;
    cout << "HANG SX: "; fflush(stdin); gets(HANGSX);
    cout << "NAM SX: "; cin >> NAMSX;
    cout << "TOC DO(so trang / phut):"; cin >> TOCDO;
    cout << "DO PHAN GIAI: "; cin >> DOPHANGIAI;
}

void LASERPRINTER::Xuat(){
    cout << "TRONG LUONG: " << TRONGLUONG << endl;
    cout << "HANG SX: " << HANGSX << endl;
    cout << "NAM SX: " << NAMSX << endl;
    cout << "TOC DO(so trang / phut):" << TOCDO << endl;
    cout << "DO PHAN GIAI: " << DOPHANGIAI << endl;
}
int main()
{
   DOTPRINTER D;
   D.Nhap();
   D.Xuat();
   cout << endl;
   LASERPRINTER L;
   L.Nhap();
   L.Xuat();
}
