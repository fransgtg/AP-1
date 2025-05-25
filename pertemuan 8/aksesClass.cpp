#include <iostream>
using namespace std;

class contohAkses { //sama seperti struct namun sifatnya private
    private :
        int privateVar; //hanya bisa diakses pada class yang sama

    protected :
        int protectedVar; //dapat diakses pada class turunan

    public :
        int publicVar; //dapat diakses dimana saja
    
    //Constructor, suatu fungsi pada class yg otomatis dipanggil saat membuat object (menginisialisasi class)
    contohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout<<"Akses dari dalam class : " <<endl;
        cout<<privateVar <<endl;
        cout<<protectedVar <<endl;
        cout<<publicVar <<endl;
    } //fungsi utk mengakses elemen-elemen dalam class
};

class Turunan : public contohAkses {
    public :
        void aksesProtected() {
            cout<<protectedVar <<endl;
            cout<<publicVar <<endl;
            // cout<<privateVar <<endl; //error, tidak bisa diakses pada class turunan
        } //class turunan, class yg membawa elemen-elemennya ke suatu struct baru
};

int main () {
    system("cls");
    contohAkses obj;
    obj.tampilkanSemua(); //mengakses struct

    cout<<"\nAkses dari luar class : " <<endl;
    // cout<<obj.privateVar <<endl; //error, karana hanya bisa diakses pada class tampilkanSemua
    // cout<<obj.protectedVar <<endl; //error, karena hanya bisa diakses pada class Turunan
    cout<<obj.publicVar <<endl; //bisa diakses karena sifatnya public

    cout<<"\nAkses dari kelas Turunan :" <<endl; 
    Turunan tur; //mendeklarasikan variabel yg bertipe class turunan
    tur.aksesProtected(); //mengakses class turunan
}
