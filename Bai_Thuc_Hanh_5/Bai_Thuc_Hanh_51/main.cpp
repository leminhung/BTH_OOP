#include<bits/stdc++.h>

using namespace std;


class PERSON{
protected:
    char HOTEN[30];
    char NGAYSINH[30];
    char QUEQUAN[30];
};

class KYSU : public PERSON{
    char NGANH[30];
    int NAMTN;
public:
    friend void INDS(KYSU *K, int n);
    void Nhap();
    void Xuat();
};

void KYSU::Nhap(){
    cout << "HO TEN: "; fflush(stdin); gets(HOTEN);
    cout << "NGAY SINH: "; fflush(stdin); gets(NGAYSINH);
    cout << "QUE QUAN: "; fflush(stdin); gets(QUEQUAN);
    cout << "NGANH: "; fflush(stdin); gets(NGANH);
    cout << "NAM TN: "; cin >> NAMTN;
}
void KYSU::Xuat(){
    cout << "HO TEN: " << HOTEN << endl;
    cout << "NGAY SINH: " << NGAYSINH << endl;
    cout << "QUE QUAN: " << QUEQUAN << endl;
    cout << "NGANH: " << NGANH << endl;
    cout << "NAM TN: " << NAMTN << endl;
}

void INDS(KYSU *K, int n){
     int MAXX = 0;
     for(int i=0; i<n; i++){
        if(K[i].NAMTN > MAXX) MAXX = K[i].NAMTN;
     }
     cout << "CAC KY SU TOT NGHIEP GAN DAY NHAT" << endl;
     for(int i=0; i<n; i++){
        if(K[i].NAMTN == MAXX){
            K[i].Xuat();
        }
     }
}
int main()
{
   KYSU *K;
   int n;
   cout << "NHAP SO LUONG KY SU n = "; cin >> n;
   K = new KYSU[n];
   for(int i=0; i<n; i++){
        K[i].Nhap();
   }

   cout << endl;
   INDS(K, n);
}

