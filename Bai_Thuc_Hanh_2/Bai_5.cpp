#include<bits/stdc++.h>
using namespace std;

class Oto{
    char maOto[15];
    float giaMuaMoi;
    int soNamSD;
    float tiLeHaoKhau;
public:
    void nhap();
    void xuat();
};

void Oto::nhap(){
    cout << "Nhap ma Oto: "; fflush(stdin); gets(maOto);
    cout << "Gia mua moi: "; cin >> giaMuaMoi;
    cout << "So Nam Su Dung: "; cin >>soNamSD;
    cout << "Ti le hoa khau/nam: "; cin >> tiLeHaoKhau;
};
void Oto::xuat(){
    cout << setw(15) << maOto << setw(15) << giaMuaMoi << setw(15) << soNamSD <<
    setw(15) << tiLeHaoKhau;
    double GT = giaMuaMoi - soNamSD * tiLeHaoKhau;
    cout << setw(15) << GT << endl;
}
int main(){
    Oto *x;
    int n;
    cout << "Nhap so luong Oto n = "; cin >> n;
    x = new Oto[n];
    for(int i=0; i<n; i++){
        x[i].nhap();
    }
    cout << setw(15) << "Ma Oto" << setw(15) << "Gia MM" <<
    setw(15) << "So NamSD" <<
    setw(15) << "Hao Khau/Nam" << setw(15) << "GT now" << endl;
    for(int i=0; i<n; i++){
        x[i].xuat();
    }
}









