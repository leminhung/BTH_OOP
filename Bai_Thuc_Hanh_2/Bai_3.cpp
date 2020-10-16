#include<bits/stdc++.h>
using namespace std;

class Array{
    float *a;
    int n;
public:
    void nhap();
    float maxArray();
    float minArray();
    void xuat();
};
void Array::nhap(){
    cout << "Nhap so phan tu cua Mang n = "; cin >> n;
    a = new float[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}
float Array::maxArray(){
    float maxA = a[0];
    for(int i=1; i<n; i++){
        maxA = max(maxA, a[i]);
    }
    return maxA;
}

float Array::minArray(){
    float minA = a[0];
    for(int i=1; i<n; i++){
        minA = min(minA, a[i]);
    }
    return minA;
}
void Array::xuat(){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    Array ar;
    cout << "Nhap mang" << endl;
    ar.nhap();
    cout << "Xuat mang" << endl;
    ar.xuat();
    cout << "MaxArray = " << ar.maxArray() << endl;
    cout << "MinArray = " << ar.minArray() << endl;
}

