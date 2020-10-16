#include<bits/stdc++.h>
using namespace std;

class PTB2{
    float a, b, c;
public:
    PTB2();
    PTB2(float x, float y, float z);
    void nhap();
    void xuat();
    void giai();
};

PTB2::PTB2(){
    a = 0;
    b = 0;
    c = 0;
}
PTB2::PTB2(float x, float y, float z){
    a = x;
    b = y;
    c = z;
}
void PTB2::nhap(){
    cout << "Nhap a = "; cin >> a;
    cout << "Nhap b = "; cin >> b;
    cout << "Nhap c = "; cin >> c;
}
void PTB2::xuat(){
    cout << "Phuong trinh bac 2 co dang y = " << a << "x2 + " << b << "x + " << c << endl;
}
void PTB2::giai(){
    if(a == 0) cout << "Day khong phai phuong trinh bac 2" << endl;
    else{
        float delta = b * b - 4 * a * c;
        if(delta < 0) cout << "Phuong trinh vo nghiem" << endl;
        else{
            cout << "Nghiem x1 = " << (-b - sqrt(delta))/(2 * a * c) << endl;
            cout << "Nghiem x2 = " << (-b + sqrt(delta))/(2 * a * c) << endl;
        }
    }
}
int main(){
    PTB2 p(1,-3, 2); p.xuat(); p.giai();
    PTB2 q; q.nhap(); q.xuat(); q.giai();
}
