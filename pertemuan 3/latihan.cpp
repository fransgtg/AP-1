#include <iostream>

using namespace std;

int main() {
    system("cls");
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai % 10 == 0) {
        cout << "Kelipatan 10"; //Kondisi ini terlebih dahulu agar inputan 20 tidak masuk ke kelipatan 5
    } else if (nilai % 5 == 0) {
        cout << "Kelipatan 5";
    } else {
        cout << "Error";
    } //Mengecek bilangan apakah kelipatan 10 atau 5

    return 0;
}
