#include<bits/stdc++.h>
using namespace std;


class PTB2{
    float a;
    float b;
    float c;
public:
    void nhap();
    void xuat();
    void giai();
};

void PTB2::nhap(){
    cout << "Nhap a = "; cin >> a;
    cout << "Nhap b = "; cin >> b;
    cout << "Nhap c = "; cin >> c;
}
void PTB2::xuat(){
    cout << "Phuong trinh bac 2: " << "y = " << a << "x2 + " << b << "x + " << c << endl;
}

void PTB2::giai(){
    float delta = b * b - 4 * a * c;
    if(a == 0) cout << "Day khong phai phuong trinh bac hai" << endl;
    else{
        if(delta < 0) cout << "Phuong trinh vo nghiem" << endl;
        else{
            cout << "x1 = " << (-b - sqrt(delta))/(2 * a) << endl;
            cout << "x2 = " << (-b + sqrt(delta))/(2 * a) << endl;
        }
    }
}

int main(){
    PTB2 x;
    x.nhap();
    x.xuat();
    x.giai();
}







