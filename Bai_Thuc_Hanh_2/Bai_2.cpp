#include<bits/stdc++.h>
using namespace std;

class Array{
    int *a;
    int n;
public:
    void nhap();
    void sapXep();
    void xuat();
};
void Array::nhap(){
    cout << "Nhap so phan tu cua Mang n = "; cin >> n;
    a = new int[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}
void Array::sapXep(){
    for(int i=0; i<n-1; i++)
        for(int j=n-1; j>i; j--){
            if(a[j] < a[j-1]) swap(a[j], a[j-1]);
        }
}
void Array::xuat(){
    cout << "Mang sau khi sap xep" << endl;
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    Array ar;
    ar.nhap();
    ar.sapXep();
    ar.xuat();
}
