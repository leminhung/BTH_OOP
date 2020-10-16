#include<bits/stdc++.h>
using namespace std;

class HINHCHUNHAT{
    int dai;
    int rong;
public:
    void nhap();
    void ve();
    float dienTich();
    int chuVi();
};

void HINHCHUNHAT::nhap(){
    cout << "Nhap chieu dai: "; cin >> dai;
    cout << "Nhap chieu rong: "; cin >> rong;
}
void HINHCHUNHAT::ve(){
    for(int i=1; i<=rong; i++){
        cout << "*";
        if(i == rong || i == 1){
            int d = dai;
            while(d != 1){
                cout << "*";
                d--;
            }
            cout << endl;
        }
        else{
            int d = 2;
            while(d <= dai){
                if(d == dai) cout << "*";
                else cout << " ";
                d++;
            }
            cout << endl;
        }
    }
}
float HINHCHUNHAT::dienTich(){
    return dai * rong;
}
int HINHCHUNHAT::chuVi(){
    return (dai + rong) * 2;
}
int main(){
    HINHCHUNHAT x;
    x.nhap();
    x.ve();
    cout << "Dien tich HCN la: " << x.dienTich() << endl;
    cout << "Chu vi HCN la: " << x.chuVi() << endl;
}

