#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout<<"==SELAMAT DATANG DI AP 1==" <<endl;
}

//fungsi dengan nilai balikan, mengembalikan nilai ke pemanggil fungsi dengan return
int tambah(int a, int b) {
    return a + b;
}

//fungsi Overload, mendefinisikan fungsi dengan nama yg sama, tetapi parameternya berbeda
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
} // nama fungsi sama, tetapi parameter pada fungsi tersebut menggunakan tipe data yg berbeda

//fungsi rekursif : mengitung nilai faktorial //fungsi yg memanggil dirinya sendiri
int faktorial(int n) {
    if(n == 0 || n == 1) {
        return 1; //faktorial dari 0 atau 1 = 1
    } else {
        return n * faktorial(n-1);
    }
}

int main() {
    system("cls");

    //menggunakan fungsi tanpa nilai balikan
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
    cout<<"Faktorial dari " <<angka <<" adalah " <<faktorial(angka) <<endl; //ketika 5 dikalikan maka fungsi tersebut memanggil fungsi faktorial dengan n-1. Begitu seterusnya sampai n = 1
}
