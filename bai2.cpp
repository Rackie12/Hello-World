#include <iostream>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

PhanSo Nhap()
{
    PhanSo b;
    cin>>b.tu;
    cin>>b.mau;
    return b;
}

void Nhap(PhanSo &a)
{
    cin>>a.tu;
    cin>>a.mau;
}
float GiaTri(PhanSo &a)
{
    float giatri=0;
    giatri= (float)a.tu/a.mau;
    return giatri;
}

int SoSanh(PhanSo a, PhanSo b)
{
    if (GiaTri(a)==GiaTri(b)) return 0;
    if (GiaTri(a)>GiaTri(b)) return 1;
    else return -1;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
