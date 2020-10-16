#include<bits/stdc++.h>
using namespace std;

class SINHVIEN{
    char maSinhVien[15];
    char hoTen[30];
    float diemToan;
    float diemLy;
    float diemHoa;
public:
    void nhap();
    friend void sapXep(SINHVIEN *a, int n);
    void xuat();
};

void SINHVIEN::nhap(){
    cout << "Ma SV: "; fflush(stdin); gets(maSinhVien);
    cout << "Ho va Ten: "; fflush(stdin); gets(hoTen);
    cout << "Diem Toan: "; cin >> diemToan;
    cout << "Diem Ly: "; cin >> diemLy;
    cout << "Diem Hoa: "; cin >> diemHoa;
}

void sapXep(SINHVIEN *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            float d = a[j].diemToan + a[j].diemLy + a[j].diemHoa;
            float k = a[j-1].diemToan + a[j-1].diemLy + a[j-1].diemHoa;
            if(k > d){
                SINHVIEN p = a[j];
                a[j] = a[j-1];
                a[j-1] = p;
            }
        }
    }
}

void SINHVIEN::xuat(){
    cout << setw(20) << maSinhVien << setw(20) << hoTen << setw(20) << diemToan
         << setw(20) << diemLy << setw(20) << diemHoa << setw(20) << diemHoa + diemLy + diemToan << endl;
}
int main(){
    SINHVIEN *a;
    int n;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    a = new SINHVIEN[n];
    cout << "=========Nhap thong tin SV=========" << endl;
    for(int i=0; i<n; i++)
        a[i].nhap();
    sapXep(a, n);
    cout << "=========Danh Sach Cac Sinh Vien=========" << endl;
    cout << setw(20) << "MSV" << setw(20) << "Ho Ten" << setw(20) << "Diem Toan"
         << setw(20) << "Diem Ly" << setw(20) << "Diem Hoa" << setw(20) << "Tong Diem" << endl;
    for(int i=0; i<n; i++)
        a[i].xuat();
    return 0;

}

