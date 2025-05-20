#include <iostream>

using namespace std;

int main () {
    system ("cls");
    float luas,p,l;

    //Menginputkan panjang & lebar
    cout<<"Masukkan panjang : "; cin>>p;
    cout<<"Masukkan lebar : "; cin>>l;

    luas = p * l; //mengalikan p & l untuk hasil luas

    cout<<"Luas segiempat : " <<luas; //menampilkan luas

    return 0;
}
