#include <iostream> // header untuk c++
#include <conio.h> // header untuk getche() dan getch()

using  namespace std;

int main () {
    system("cls");
    string nama,nim;
    float ip;
    char kom,jk;
    /*ini untuk komentar beberapa baris*/
    cout<<"Hello World" <<endl;
    cout<<"Masukkan nama : ";
    getline (cin,nama);// agar karakter spasi bisa terbaca
    cout<<"Masukkan KOM : "; cin>>kom; 
    cout<<"Masukkan NIM : "; cin>>nim;
    cout<<"Masukkan IP : "; cin>>ip; 
    cout<<"Masukkan jenis kelamin(L/P) : "; 
    jk = getche();cout<<endl; //agar karakter langsung tampil, jadi ga perlu tekan enter

    //output
    cout<<nama<<endl;
    cout<<kom<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    putchar(jk); cout<<endl; // untuk menampilkan karakter jenis kelamin
    getch();// karakter yang diketik tidak ditampilkan
}