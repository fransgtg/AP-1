#include <iostream>
using namespace std;

void sapa(string nama) {
    cout<<"Hallo " <<nama <<"! Selamat belajar C++" <<endl;
}

int main() {
    system("cls");
    string namaPengguna = "Frans";
    sapa(namaPengguna);

    return 0;
}