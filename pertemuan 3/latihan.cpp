#include <iostream>

using namespace std;

int main() {
    system("cls");
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai % 10 == 0) {
        cout << "Kelipatan 10";
    } else if (nilai % 5 == 0) {
        cout << "Kelipatan 5";
    } else {
        cout << "Error";
    }

    return 0;
}
