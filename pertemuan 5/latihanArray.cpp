#include <iostream>
using namespace std;

int main() {
    system("cls");
    // penjumlahan matriks 2 x 2 //Deklarasi array untuk matriks 2x2
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout<<"Matriks 1 : " <<endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout<<"Masukkan elemen baris " <<i + 1 <<" kolom " <<j + 1 <<" : ";
            cin>>matriks1[i][j];
        }
    } //Nested loop untuk input elemen-elemen matriks
    cout<<"Matriks 2 : " <<endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout<<"Masukkan elemen baris " <<i + 1 <<" kolom " <<j + 1 <<" : ";
            cin>>matriks2[i][j];
        }
    }

    cout<<"Hasil Penjumlahan" <<endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout<<hasil[i][j] <<" ";
        } //meenjummlahkan elemen-elemen matriks
        cout<<endl;
    }
}
