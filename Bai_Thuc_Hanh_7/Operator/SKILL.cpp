#include<bits/stdc++.h>

using namespace std;

class ARRAY{
    float *VALUE;
    int n;
public:
    friend istream& operator>>(istream& x, ARRAY &y);
    friend ostream& operator<<(ostream& x, ARRAY y);
    ARRAY operator++();
    ARRAY operator--();
};

istream& operator>>(istream& x, ARRAY &y){
    cout << "INPUT THE SIZE() OF ARRAY n = "; x>>y.n;
    y.VALUE = new float[y.n];
    for(int i=0; i<y.n; i++){
        x>>y.VALUE[i];
    }
    return x;
}
ostream& operator<<(ostream& x, ARRAY y){
    x << "=======OUTPUT ARRAY========" << endl;
    for(int i=0; i<y.n; i++){
        x << y.VALUE[i] << " ";
    }
    cout << endl;
    return x;
}
ARRAY ARRAY::operator++(){
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if(VALUE[j] < VALUE[j-1]){
                swap(VALUE[j], VALUE[j-1]);
            }
        }
    }
    return *this;
}
ARRAY ARRAY::operator--(){
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if(VALUE[j] > VALUE[j-1]){
                swap(VALUE[j], VALUE[j-1]);
            }
        }
    }
    return *this;
}
int main(){
    ARRAY P, Q;
    cout << "=========INPUT P=========" << endl;
    cin >> P;
    cout << "=========INPUT Q=========" << endl;
    cin >> Q;
    cout << "==========Sort arrays in ascending order==========" << endl;
    P = ++P;
    cout << P;
    cout << "==========Sort arrays in decending order==========" << endl;
    Q = --Q;
    cout << Q;




}
