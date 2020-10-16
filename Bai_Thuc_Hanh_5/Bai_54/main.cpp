#include <bits/stdc++.h>

using namespace std;


class ELECTRONIC{
protected:
    int DIENAP;
    float CONGSUAT;
public:
    ELECTRONIC(int x, float y);
};
ELECTRONIC ::ELECTRONIC(int x, float y){
    DIENAP = x;
    CONGSUAT = y;
}

class MAYGIAT : public ELECTRONIC{
    int DUNGTICH;
    char LOAI[30];
public:
    void Xuat();
    MAYGIAT(int DT, char *L, int x, int y);
};

MAYGIAT::MAYGIAT(int DT, char *L, int x, int y):ELECTRONIC(x, y){
    DUNGTICH = DT;
    strcpy(LOAI, L);
}
void MAYGIAT::Xuat(){
    cout << "DIEN AP: " << DIENAP << endl;
    cout << "CONG SUAT: " << CONGSUAT << endl;
    cout << "DUNG TICH: " << DUNGTICH << endl;
    cout << "LOAI: " << LOAI << endl;
}

class TULANH : public ELECTRONIC{
    int DUNGTICH;
    int SONGAN;
public:
    void Xuat();
    TULANH(int DT, int SN, int x, int y);
};

TULANH::TULANH(int DT, int SN, int x, int y):ELECTRONIC(x, y){
    DUNGTICH = DT;
    SONGAN = SN;
    CONGSUAT = x;
    DIENAP = y;
}

void TULANH::Xuat(){
    cout << "DIEN AP: " << DIENAP << endl;
    cout << "CONG SUAT: " << CONGSUAT << endl;
    cout << "DUNG TICH: " << DUNGTICH << endl;
    cout << "SO NGAN: " << SONGAN << endl;
}
int main()
{
    MAYGIAT MG(30, "HUNG", 300, 400);
    MG.Xuat();
    cout << endl;

    TULANH TL(30, 5, 300, 456);
    TL.Xuat();
}
