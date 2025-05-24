#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void sapa(string nama) {
    cout<<"Hallo " <<nama <<"! Selamat belajar C++" <<endl;
}

int main() {
    system("cls");
    string namaPengguna = "Frans";
    sapa(namaPengguna); //memanggil fungsi

    return 0;
}
