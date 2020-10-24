#include<bits/stdc++.h>
using namespace std;

class SINHVIEN{
    char MASV[30];
    char HOTEN[30];
    int TUOI;
public:
    friend istream& operator>>(istream &x, SINHVIEN &y);
    friend ostream& operator<<(ostream& x, SINHVIEN y);
};

istream& operator>>(istream &x, SINHVIEN &y){
    cout << "MA SV: "; x.getline(y.MASV, 30);
    cout << "HO TEN: "; x.getline(y.HOTEN, 30);
    cout << "TUOI: "; x>>y.TUOI;
    return x;
}
ostream& operator<<(ostream& x, SINHVIEN y){
    x<<setw(30) << y.MASV << setw(30) << y.HOTEN << setw(10) << y.TUOI << endl;
    return x;
}
int main(){
    SINHVIEN a;
    cin >> a;
    cout << a;

}
