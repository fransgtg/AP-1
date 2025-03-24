#include <iostream>
using namespace std;

int main () {
    system("cls");
    string kalimat;
    int i;

    cout<<"Masukkkan kalimat : "; getline(cin,kalimat);

    for(i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }
    cout<<"Kalimat dalam hururf kapital : " <<kalimat <<endl;

    return 0;
}