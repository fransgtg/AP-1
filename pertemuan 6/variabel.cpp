#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; //variabel global bisa dipakai dimana saja

void namaVariabel() {
    string namaLokal = "Komputer"; //variabel lokal hanya bisa dipakai pada fungsi namaVariabel

     //coba akses
    cout<<namaLokal <<endl;

    //coba akses
    cout<<namaGlobal <<endl;
}

int main() {
    namaVariabel(); //pemanggilan fungsi

    //coba akses
    cout<<namaGlobal <<endl; //memanggil variabel global

    //coba akses
    // cout<<namaLokal <<endl; //error : karena hanya bisa dipakai pada fungsi namaVariabel saja
}
