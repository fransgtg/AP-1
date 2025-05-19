#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat
{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct
};


int main() {
    system("cls");
    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jl.B.Cempaka";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20156;

    // cout<<"Alamat : " <<mhs1.alamat.jalan <<endl;
    // cout<<"Kota : " <<mhs1.alamat.kota <<endl;
    // cout<<"Kode Pos : " <<mhs1.alamat.kodePos <<endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout<<"Masukkan banyak mahasiswa : "; cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Mahasiswa " <<i + 1 <<endl;
        cin.get();
        cout<<"Masukkan nama : "; 
        getline(cin,mhs1.nama);
        cout<<"Masukkan umur : ";
        cin>>mhs1.umur;
        cout<<"Masukkan IPK : ";
        cin>>mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i < n; i++) {
        cout<<"Mahasiswa " <<i + 1 <<endl;
        cout<<"Nama : " <<mahasiswa[i].nama <<endl;
        cout<<"Umur : " <<mahasiswa[i].umur <<endl;
        cout<<"IPK : " <<mahasiswa[i].ipk <<endl;
    }
}