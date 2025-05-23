#include <iostream>
using namespace std;

int main() {
    system("cls");
    string kalimat;
    int i;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||
            kalimat[i] == 'e' || kalimat[i] == 'o') {
            kalimat[i] = toupper(kalimat[i]); 
        } //memeriksa huruf vokal pada variabel kalimat, lalu mengubahnya menjadi huruf kapital
    }
    cout << "Kalimat dengan huruf vokal kapital : " << kalimat << endl;

    return 0;
}
