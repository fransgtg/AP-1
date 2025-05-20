#include <iostream>

using namespace std;

int main () {
    system("cls");

    int nilai;

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    // if statement, operasi if dengan satu kondisi
    // if (nilai <= 65) {
    //     cout<<"Anda tidak lulus"<<endl; //Blok program akan dijalankan apabila kondisi terpenuhi
    // }

    // if-else statement, apabila suatu kondisi tidak terpenuhi maka akan menjalankan blok program pada bagian else
    // if (nilai <= 65) {
    //     cout<<"Anda tidak lulus!"<<endl;
    // } else {
    //     cout <<"Anda lulus!" <<endl;
    // }

    //if-else if statement, apabila lebih dari satu kondisi maka akan menjalankan kondisi selanjutnya
    // if (nilai == 100) {
    //     cout<<"Anda keceh !"<<endl;
    // } else if (nilai <= 65) {
    //     cout<<"Anda tidak lulus!" <<endl;
    // } else {
    //     cout<<"Anda lulus !";
    // }

    // Nested if, terdapat if di dalam if
    // if (nilai <= 65) {
    //     cout<<"Anda tidak lulus" <<endl;
    // } else {
    //     if (nilai == 100) {
    //         cout<<"Anda lulus dan anda keceh"<<endl;
    //     } else {
    //         cout<<"Anda lulus" <<endl;
    //     }
    // }

    // Switch case, memeriksa beberapa kondisi tanpa menggunakan banyak if-else
    // switch (nilai) {
    //     case 1 : 
    //         cout<<"Senin" <<endl;
    //         break; //Agar berhenti pada case sebelumnya lalu lanjut memeriksa case selanjutnya
    //     case 2 : 
    //         cout<<"Selasa" <<endl;
    //         break;
    //     case 3 : 
    //         cout<<"Rabu" <<endl;
    //         break;
    //     case 4 : 
    //         cout<<"Kamis" <<endl;
    //         break;
    //     case 5 : 
    //         cout<<"Jumat" <<endl;
    //         break;
    //     case 6 : 
    //         cout<<"Sabtu" <<endl;
    //         break;
    //     case 7 : 
    //         cout<<"Minggu" <<endl;
    //         break;
    //     default : //Apabila tidak ada kondisi yg memenuhi pada case-case tersebut
    //         cout<<"Inputan tidak valid" <<endl;
    //         break;
    // }

    //switch range, operator switch  dengan jarak antar nilai
    // switch (nilai) {
    //     case 85 ... 100 :
    //         cout<<"A" <<endl;
    //         break;
    //     case 80 ... 84 :
    //         cout<<"B+" <<endl;
    //         break;
    //     case 75 ... 79 :
    //         cout<<"B" <<endl;
    //         break;
    //     case 70 ... 74 :
    //         cout<<"C+" <<endl;
    //         break;
    //     case 60 ... 64 :
    //         cout<<"C" <<endl;
    //         break;
    //     default:
    //         cout<<"E" <<endl;
    //         break;
    // }

    // Ternary Operator
    // if (nilai % 2 == 0) {
    //     cout<<"Genap nih" <<endl;
    // } else {
    //     cout<<"Ganjil sih" <<endl;
    // } //Mengecek bilangan genap atau ganjil

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; //operator kondisi mirip seperti if-else tetapi lebih ringkas
    cout<<nilai <<" tuh bilangan " <<checkNum <<" sih" <<endl;
}
