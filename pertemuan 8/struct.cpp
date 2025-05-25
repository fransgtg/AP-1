#include <iostream>
#include <string>
#include <vector>
using namespace std;

//mendeklarasikan struct
struct Alamat //tipe data yg digunakam utk mengelompokkan beberapa variabel dengan tipe yg berbeda dalam 1 unit
{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct, memanggil struct pada suatu struct
};


int main() {
    system("cls");
    Mahasiswa mhs1; //mendeklarasikan variabel bertipe struct pada main program
    
    //mengakses nested struct
    // mhs1.alamat.jalan = "Jl.B.Cempaka";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20156;

    //menampilkan struct
    // cout<<"Alamat : " <<mhs1.alamat.jalan <<endl;
    // cout<<"Kota : " <<mhs1.alamat.kota <<endl;
    // cout<<"Kode Pos : " <<mhs1.alamat.kodePos <<endl;

    vector<Mahasiswa> mahasiswa; //vector yg bertipe data struct
    int n;
    cout<<"Masukkan banyak mahasiswa : "; cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Mahasiswa " <<i + 1 <<endl;
        cin.get(); //untuk mengatasi new line pada baris sebelumnya
        cout<<"Masukkan nama : "; 
        getline(cin,mhs1.nama); //agar dapat membaca spasi
        cout<<"Masukkan umur : ";
        cin>>mhs1.umur;
        cout<<"Masukkan IPK : ";
        cin>>mhs1.ipk;

        mahasiswa.push_back(mhs1); //menambahkan elemen-elemen pada mhs1 ke vector mahasiswa
    } //perulangan mengisi data mahasiswa sesuai banyak mahasiswa

    for(int i = 0; i < n; i++) {
        cout<<"Mahasiswa " <<i + 1 <<endl;
        cout<<"Nama : " <<mahasiswa[i].nama <<endl; //mmengakses vector
        cout<<"Umur : " <<mahasiswa[i].umur <<endl;
        cout<<"IPK : " <<mahasiswa[i].ipk <<endl;
    } //menampilkan data mahasiswa
}
