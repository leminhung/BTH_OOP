#include <bits/stdc++.h>

using namespace std;

class HANG{
    char MAH[30];
    char TENH[30];
    float DONGIA;
    int SL;
    int NAM;
public:
    HANG();
    HANG(char *u, char *v, float z, int t, int h);
    friend istream& operator>>(istream& x, HANG &y);
    friend ostream& operator<<(ostream& x, HANG y);
    friend void Check(HANG *H, int n);
    friend void SORT(HANG *H, int n);
    friend void REMOVE(HANG *H, int &n);
    friend void REMOVE_20(HANG *H, int &n);


};

HANG::HANG(){
    strcpy(MAH, "");
    strcpy(TENH, "");
    DONGIA = 0;
    SL = 0;
    NAM = 0;
}
HANG::HANG(char *u, char *v, float z, int t, int h){
    strcpy(MAH, u);
    strcpy(TENH, v);
    DONGIA = z;
    SL = t;
    NAM = h;
}
istream& operator>>(istream& x, HANG &y){
    cout << "MA HANG: "; fflush(stdin); x.getline(y.MAH, 30);
    cout << "TEN HANG: "; fflush(stdin); x.getline(y.TENH, 30);
    cout << "DON GIA: "; x>>y.DONGIA;
    cout << "SO LUONG: "; x>>y.SL;
    cout << "NAM SX: "; x>>y.NAM;
    return x;
}
ostream& operator<<(ostream& x, HANG y){
    x << "MA HANG: " << y.MAH << endl;
    x << "TEN HANG: " << y.TENH << endl;
    x << "DON GIA: " << y.DONGIA << endl;
    x << "SO LUONG: " << y.SL << endl;
    x << "NAM SX: " << y.NAM << endl;
    return x;
}

void Check(HANG *H, int n){
    int d = 0;
    for(int i=0; i<n; i++){
        if(strcmp(H[i].TENH, "IPHONE12") == 0) d++;
    }
    if(d > 0) cout << "====Co " << d << " chiec IPHONE12 trong mat hang vua nhap=====" << endl;
    else cout << "Khong co chiec IHONE12 nao trong cac mat hang vua nhap" << endl;
}
void SORT(HANG *H, int n){
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if(H[j].DONGIA * H[j].SL < H[j-1].DONGIA * H[j-1].SL){
                HANG x = H[j];
                H[j] = H[j-1];
                H[j-1] = x;
            }
        }
    }
}
void REMOVE(HANG *H, int &n){
    for(int i=0; i<n; i++){
        if(strcmp(H[i].MAH, "H005") == 0){
            for(int j=i; j<n-1; j++){
                H[j] = H[j+1];
            }
            n--;
        }
    }
    H = (HANG*)realloc(H, n*sizeof(HANG));
}
void REMOVE_20(HANG *H, int &n){
    for(int i=0; i<n; i++){
        if(H[i].DONGIA < 20){
            for(int j=i; j<n-1; j++){
                H[j] = H[j+1];
            }
            n--;
        }
    }
    H = (HANG*)realloc(H, n*sizeof(HANG));
}
int main()
{
    HANG *H;
    int n;
    cout << "NHAP SO LUONG MAT HANG n = "; cin >> n;
    H = new HANG[n];

    ofstream f("C:/Users/PC/Desktop/HANGNHAP.DAT", ios::app);
    for(int i=0; i<n; i++){
        cin >> H[i];
        f << H[i];
    }
    f.close();
    Check(H, n);
    SORT(H, n);
    ofstream f1("C:/Users/PC/Desktop/HANGSORT.TXT", ios::app);
    for(int i=0; i<n; i++){
        f1 << H[i];
    }
    f1.close();

    REMOVE(H, n);
    ofstream f2("C:/Users/PC/Desktop/HANGREMOVE.TXT", ios::app);
    for(int i=0; i<n; i++){
        f2 << H[i];
    }
    f2.close();

    REMOVE_20(H, n);
    ofstream f3("C:/Users/PC/Desktop/HANGREMOVE.TXT", ios::app);
    for(int i=0; i<n; i++){
        f3 << H[i];
    }
    f3.close();

}
