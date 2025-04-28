#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout<<"==SELAMAT DATANG DI AP 1==" <<endl;
}

//fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

//fungsi Overload
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

//fungsi rekursif : mengitung nilai faktorial
int faktorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

int main() {
    system("cls");

    //menggunakan fuungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;
    //menggunakan fungsi balikan
    int hasilTambah = tambah(x,y);
    cout<<"Hasil penjumlahan = " <<hasilTambah <<endl;

    //menggunakkan fungsi overload
    int hasilKaliInt = kali(x,y);
    double hasilKaliDouble = kali(5.5, 2.0);
    cout<<"Hasil perkalian(int) = " <<hasilKaliInt <<endl;
    cout<<"Hasil perkalian(double) = " <<hasilKaliDouble <<endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout<<"Faktorial dari " <<angka <<" adalah " <<faktorial(angka) <<endl;
}