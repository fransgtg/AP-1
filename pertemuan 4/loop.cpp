#include <iostream>
using namespace  std;

int main () {
    system("cls");

    // Goto Label, melompati program yg akan dijalankan sesuai dengan perintah goto
    //  Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI
    // a : 
    //     cout<<"Hello World\n";
    //     goto d;
    // b :
    //     cout<<"Fasilkom-TI\n";
    //     return 0;
    // c :
    //     cout<<"Ilmu Komputer\n";
    //     goto b;
    // d :
    //     cout<<"IKLC\n";
    //     goto c;

    // Menampilkan bilangan genap 10 -> 2
    // int i = 10;
    // genap :
    //     if (i % 2 == 0) {
    //         cout<<i <<endl;
    //     } i--; //kondisi untuk bilangan genap lalu menampilkannya //decrement jadi dimulai dari angka genap terbesarnya

    // if (i >= 2) {
    //     goto genap;
    // } //perulangan dengan menggunakan goto

    // Statement while
    // int i = 1;
    // while (i <= 10) { // perulangan while dengan memeriksa kondisi terlebih dahulu lalu menjalankan program, apabila kondisi tidak terpenuhi maka program akan terhenti
    //     if (i % 2 == 0) {
    //         cout<<i <<" ";
    //     } i++; //menampilkan bilangan genap dengan perulangan while //increment jadi dimulai dari angka genap terkecil
    // } 

    // Statement do-while, sama seperti while. bedanya menjalankan program terlebih dahulu lalu memeriksa kondisi
    // int i = 1;
    // do {
    //     cout<<i <<endl;
    // } while (i <= 0);

    // Statement for
    // for (inisialisasi; kondisi; increase)
    // for (int i = 1; i <= 10; i += 2) {
    //     cout<<"Hello World" <<endl;
    // } //Menampilkan Hello World sebanyak 5 kali. Pertama inisialisasi lalu mengecek kondisi (apabila terpenuhi maka dijalankan, kalau tidak akan sebaliknya), increment

    // Nested for
    // ***** 5 x 5
    // for(int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= 5; j++) {
    //         cout<<"*";
    //     }
    //    cout<<endl;
    // }

    // Segitiga siku-siku
    // for(int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}
