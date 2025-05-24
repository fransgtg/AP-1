#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
    cout<<a + b <<endl;
}

void penjumlahanPointer(int *a, int *b) {
    *a += *b;
    cout<<a <<endl;
}

void doubleValue (int *a) {
    *a *= 2;
    cout<<*a <<endl;
}

int main() {
    system("cls");

    //deklarasi pointer
    int number = 35;
    int *pointer_number = &number; //*menyimpan niali pada alamat yg dituju. & mengarahkan ke alamat yg dituju //pointer_number berisi alamat number // *pointer_number berisi nilai pada number

    // cout<<"Isi variabel number = " <<number <<endl;
    // cout<<"Alamat memori variabel number = " <<&number <<endl;
    // cout<<"Isi variabel pointer number = " <<pointer_number <<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = " <<*pointer_number <<endl;
    // cout<<"Alamat memori variabel pointer_number = " <<&pointer_number <<endl;

    //pointer operation
    // *pointer_number = 25; //mengganti nilai pada pointer *pointer_number
    // cout<<"Isi variabel number = " <<number <<endl; //output : 25 , karena nilai number sudah diganti oleh pointer
    // cout<<"Alamat memori variabel number = " <<&number <<endl;
    // cout<<"Isi variabel pointer number = " <<pointer_number <<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = " <<*pointer_number <<endl; //output : 25
    // cout<<"Alamat memori variabel pointer_number = " <<&pointer_number <<endl;

    //pointer in array
    int num[] = {1,2,3,4,5};
    int *pointer_num = num; // pada array tidak memakai &
    // cout<<"Isi variabel number = " <<num[0] <<endl; //nilai pada indeks ke-0
    // cout<<"Alamat memori variabel number = " <<&num[1] <<endl; //alamat pada indeks ke-1
    // cout<<"Isi variabel pointer number = " <<pointer_num <<endl; //berisi alamat pada indeks ke-0
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = " <<*pointer_num <<endl; //output : 1 , karena alamat yg ditunjuk pada indeks ke-0
    // cout<<"Alamat memori variabel pointer_number = " <<&pointer_num <<endl; //alamat pointer_num

    // *pointer_num += 5; // 6 //pointer(alamat pada indeks ke-0) ditambah 5 dan nilainya disimpan
    // cout<<"Isi variabel number = " <<num[0] <<endl; //isinya menjadi 6 karena sudah digganti oleh pointer
    // cout<<"Alamat memori variabel number = " <<&num[1] <<endl;
    // cout<<"Isi variabel pointer number = " <<pointer_num <<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = " <<*pointer_num <<endl; //output : 6
    // cout<<"Alamat memori variabel pointer_number = " <<&pointer_num <<endl; 

    //pointer in prameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2); //memanggil fungsi
    // cout<<num1 <<endl;
    // cout<<num2 <<endl;
    // cout<<endl;

    // penjumlahanPointer(&num1, &num2); //alamat dari penjumlahanPointer *a+=*b
    // cout<<num1 <<endl;
    // cout<<num2 <<endl;

    //pointer in pointer //pointer dipointerkan lagi (pointer ganda)
    // int score = 4;
    // int *pointer_score = &score;
    // int **pointer_score1 = &pointer_score;

    // cout<<"Isi variabel score = " <<score <<" dan alamat memorinya " <<&score <<endl;
    // cout<<"Isi dari variabel pointer_score " <<pointer_score <<" dan isi variabel yg ditunjuk oleh pointer score " <<*pointer_score <<" alamat memori pointer_score " <<&pointer_score <<endl;
    // cout<<"Isi dari variabel pointer_score " <<pointer_score <<" dan isi variabel yg ditunjuk oleh pointer_score1 " <<**pointer_score1 <<" alamat memori pointer_score1 " <<&pointer_score1 <<endl;

    //dynamic pointer
    // int *ptr = new int; // mengalokasikan memori secara dinamis 
    // *ptr = 30; //menyimpan memori pada pointer
    // cout<<"Isi variabel ptr = " <<*ptr <<" alamat variabel ptr = " <<&ptr <<endl;
    
    // delete ptr; //deallocation //menghapus memori yg dialokasikan
    // cout<<"Isi variabel ptr = " <<*ptr <<" alamat variabel ptr = " <<&ptr <<endl; //isi *ptr menjadi acak

    //contoh, mengoperasikan pointer
    // int n;
    // cout<<"masukkan sebuah angka = "; cin>>n;
    // doubleValue(&n);
    // cout<<"Nilai angka setelah dikali 2  = " <<n <<endl;

}
