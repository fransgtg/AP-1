#include <iostream>

using namespace std;

int main () {
    system("cls");
    float luas,vol,r;
    const float phi = 3.14; //Konstanta(nilai yg tidak bisa diubah)
    cout<<"r = "; cin>>r;

    luas = 4 * phi * r * r;
    vol = (float) 4/3 * phi * r * r * r; //Agar hasil yg ditampilkan desimal

    cout<<"Luas permukaan :" <<luas <<endl;
    cout<<"Volume : " <<vol;
}
