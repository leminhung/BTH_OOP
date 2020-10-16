#include<bits/stdc++.h>
using namespace std;

class ARRAY{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int k);
    ~ARRAY();
    void nhap();
    void xuat();
};
ARRAY::ARRAY(){
    n = 0;
    VALUE = NULL;
}

ARRAY::ARRAY(int k){
    n = k;
    VALUE = new int[n];
    for(int i=0; i<n; i++){
        VALUE[i] = 0;
    }
}

ARRAY::~ARRAY(){
    n = 0;
    VALUE = NULL;
}


void ARRAY::nhap(){
    if(n == 0){
        cout << "Nhap n = "; cin >> n;
    }
    if(VALUE == NULL){
        VALUE = new int[n];
    }

    for(int i=0; i<n; i++){
        cin >> VALUE[i];
    }
}

void ARRAY::xuat(){
    for(int i=0; i<n; i++){
        cout << VALUE[i] << " ";
    }
    cout << endl;
}
int main(){

    ARRAY a(5);
    cout << "Xuat mang a vua khoi tao: " << endl;
    a.xuat();
    cout << "============Nhap Mang=========" << endl;
    a.nhap();
    cout << "============Xuat Mang=========" << endl;
    a.xuat();





}









