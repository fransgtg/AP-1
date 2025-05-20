#include <iostream>

using namespace std;

int main () {
    system("cls");
   int a = 3;
   int b = 5;

    //Aritmetic Operator (+,-,*,/) //operator aritmatika
    //int tambah = a+b; //memberikan nilai pada variabel melalui operasi aritmatika
    //int kurang = a-b;
    //int kali = a*b;
    //int bagi = a/b;
    //int modulo = a%b; //sisa pembagian

    //cout<<"hasil penjumlahan : " <<tambah <<endl;
    //cout<<"hasil pengurangan : " <<kurang <<endl;
    //cout<<"hasil perkalian : " <<kali <<endl;
    //cout<<"hasil pembagian : " <<bagi <<endl;
    //cout<<"hasil sisa bagi : " <<modulo <<endl;

    //Relational Operator, operator yg digunakan untuk membandingkaan dua buah nilai dan hasilnya true(1) atau false(0)
    //cout<<(a==b) <<endl; //sama dengan
    //cout<<(a>b) <<endl; //lebih besar
    //cout<<(a>=b) <<endl; //lebih besar atau sama dengan
    //cout<<(a<b) <<endl; //lebih kecil
    //cout<<(a<=b) <<endl; //lebih kecil atau sama dengan
    //cout<<(a!=b) <<endl; //tidak sama dengan

    //Logical Operator, membandingkan beberapa nilai dan hasilnya true(1) dan false (0)
    //cout<<(true && true) <<endl;
    //cout<<(true && false) <<endl;
    //cout<<(false && true) <<endl;
    //cout<<(false && false) <<endl;

    //cout<<!true<<endl; // untuk negasi
    //cout<<!false<<endl;

    //Bitwise Operator (&,|,~,<<,>>,^) --> Operasi Biner
    //cout<<(5 & 7)<<endl; //AND
    //cout<<(5 | 7)<<endl; //OR
    //cout<<(5 ^ 7)<<endl; //XOR
    //cout<<(~7)<<endl; //NOT
    //cout<<(7 << 2) <<endl; //SHIFT LEFT
    //cout<<(7 >> 2) <<endl; // SHIFT RIGHT

    //Shorthand, memberikan nilai pada variabel setelah dioperasikan
    // a += 7; //a = a + 7
    // cout<<a <<endl;

    // a -= 7; //a = a-7
    // cout<<a <<endl;

    // a *= 7; //a = a * 7
    // cout<<a <<endl;

    // a /= 7; //a = a / 7
    // cout<<a <<endl;

    //Increment & Decrement
    //Pre Increment
    // cout<< a <<endl;
    // cout<< ++a <<endl; //menambah a sebanyak 1, menampilkan a terlebih dahulu lalu menampilkan hasil pre increment 

    // cout<< b <<endl;
    // cout<< ++b <<endl; //menambah b sebanyak 1, menampilkan b terlebih dahulu lalu menampilkan hasil pre increment 


    //Post Increment
    // cout<<a <<endl;
    // cout<<a++ <<endl; //menambah a sebanyak 1 lalu langsung menampilkannya
    // cout <<a <<endl;

    // cout<<b <<endl;
    // cout<<b++ <<endl; //menambah b sebanyak 1 lalu langsung menampilkannya
    // cout <<b <<endl;

    //Pre Decrement
    cout<<a <<endl; 
    cout<<--a <<endl; //mengurangi a sebanyak 1, menampilkan a terlebih dahulu lalu menampilkan hasil pre decrement

    cout<<b <<endl;
    cout<<--b <<endl; //mengurangi b sebanyak 1, menampilkan b terlebih dahulu lalu menampilkan hasil pre decrement

    //Post Decrement
    cout<<a <<endl;
    cout<<a-- <<endl; //mengurangi b sebanyak 1 lalu langsung menampilkannya
    cout<<a <<endl;

    cout<<b <<endl;
    cout<<b-- <<endl; //mengurangi b sebanyak 1 lalu langsung menampilkannya
    cout<<b <<endl;

}
