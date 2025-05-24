#include <iostream>
#include <vector> //library untuk vector
using namespace std;

int main() {
    system("cls");
    //Vector Declaration & Intialization

    vector<string> nama_karyawan = {"Frans","Rifki","Fatih","Dapa"}; // vector sama seperti array namun sifatnya fleksibel (ukuranya bisa diubah)
    // for (string karyawan : nama_karyawan) {
    //     cout<<karyawan <<endl; //mengubah nama variabel nama_karyawan menjadi karyawan
    // }

    //Add data to vector
    nama_karyawan.push_back("Dhafa"); // menambahkan "Dhafa" pada vector
    // for(int i = 0; i < nama_karyawan.size(); i++) {
    //     cout<<nama_karyawan[i] <<endl; //menampilkan vector
    // }

    //Delete data from Vector
    nama_karyawan.pop_back(); //menghapus elemen terakhir pada vector

    nama_karyawan.erase(nama_karyawan.begin() + 3); //menghapus elemen pada indeks ke-3 terakhir

    for(int i = 0; i < nama_karyawan.size(); i++) {
        cout<<nama_karyawan[i] <<endl;
    } //"Dapa" dan ""Dhafa" terhapus
}
