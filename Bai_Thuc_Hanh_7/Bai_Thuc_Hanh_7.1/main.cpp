#include<bits/stdc++.h>
using namespace std;

class FACULTY;
class SCHOOL{
    char NAME_SC[30];
    int DATE_SC;
    friend class FACULTY;
};
class FACULTY{
    char NAME_FA[30];
    int DATE_FA;
    SCHOOL x;
public:
    void Nhap();
    void Xuat();
};

void FACULTY::Nhap(){
    cout << "NAME_FA: "; fflush(stdin); gets(NAME_FA);
    cout << "DATE_FA: "; cin >> DATE_FA;
    cout << "NAME_SC: "; fflush(stdin); gets(x.NAME_SC);
    cout << "DATE_SC: "; cin >> x.DATE_SC;
}
void FACULTY::Xuat(){
    cout << "NAME_FA: " << NAME_FA << endl;
    cout << "DATE_FA: " << DATE_FA << endl;
    cout << "NAME_SC: " << x.NAME_SC << endl;
    cout << "DATE_SC: " << x.DATE_SC << endl;
}

class PERSON{
protected:
    char NAME_P[30];
    int BIRTH;
    char ADDRESS[30];
public:
    void Nhap();
    void Xuat();
    PERSON();
};

void PERSON::Nhap(){
    cout << "NAME_P: "; fflush(stdin); gets(NAME_P);
    cout << "BIRTH: "; cin >> BIRTH;
    cout << "ADDRESS: "; fflush(stdin); gets(ADDRESS);
}
void PERSON::Xuat(){
    cout << "NAME_P: " << NAME_P << endl;
    cout << "BIRTH: " << BIRTH << endl;
    cout << "ADDRESS: " << ADDRESS << endl;
}

PERSON::PERSON(){
}

class STUDENT : public PERSON{
    FACULTY y;
    char CLASS[30];
    float DIEM;
public:
    void Nhap();
    void Xuat();
    STUDENT();
};

void STUDENT::Nhap(){
    y.Nhap();
    PERSON::Nhap();
    cout << "CLASS: "; fflush(stdin); gets(CLASS);
    cout << "DIEM: "; cin >> DIEM;
}
void STUDENT::Xuat(){
    y.Xuat();
    PERSON::Xuat();
    cout << "CLASS: " << CLASS << endl;
    cout << "DIEM: " << DIEM << endl;
}
STUDENT::STUDENT(){
}
int main(){
    STUDENT S;
    cout << "==========NHAP THONG TIN SV==============" << endl;
    S.Nhap();
    cout << "==========XUAT THONG TIN SV==============" << endl;
    S.Xuat();
}









