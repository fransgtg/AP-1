#include <iostream>
using namespace std;

int main () {
    system("cls");
    string kalimat;
    int i;

    cout<<"Masukkkan kalimat : "; getline(cin,kalimat);

    for(i = 0; i < kalimat.length(); i++) { //kalimat.length, menghitung jumlah karakter pada variabel kalimat
        kalimat[i] = toupper(kalimat[i]); //toupper, mengubah huruf kecil menjadi huruf kapital pada indeks ke-i
    }
    cout<<"Kalimat dalam hururf kapital : " <<kalimat <<endl;

    return 0;
}
