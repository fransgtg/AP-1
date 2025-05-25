#include <iostream>
#include <string>
using namespace std;

//mendeklarasikan struct
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    system("cls");
    Mahasiswa mhs1; //mendeklarasikan variabel bertipe struct

    //mengakses struct
    mhs1.nama = "Frans";
    mhs1.umur = 19;
    mhs1.ipk = 3.92;

    // cout<<"Akses dengan : " <<endl;
    // cout<<"Nama : " <<mhs1.nama <<endl;
    // cout<<"Umur : " <<mhs1.umur <<endl;
    // cout<<"IPK : " <<mhs1.ipk <<endl; 

    Mahasiswa *ptrMhs = &mhs1; //struct pada pointer dengan alamatnya mhs1
    cout<<"Akses dengan => " <<endl;
    cout<<"Nama : " <<ptrMhs->nama <<endl; //mengakses struct pada pointer dengan tanda panah ->
    cout<<"Umur : " <<ptrMhs->umur <<endl;
    cout<<"IPK : " <<ptrMhs->ipk <<endl;
}
