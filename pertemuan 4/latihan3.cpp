#include <iostream>
using namespace std;

int main() {
    system("cls");
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    } //password.substr(0, i+1), mengambil bagian dari string dari indeks ke-o sebanyak i + 1. Setelah itu disimpan di var expected dan diulang sebanyak banyak karakter pada password.

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    } //mengecek apakah input sandi sama dengan expected

    return 0;
}
