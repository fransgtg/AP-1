#include <stdio.h> // header untuk C
#include <conio.h> // header untuk getch() dan getchar()

int main() {
    system("cls");
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C, tipe integer

    getchar(); // untuk mengatasi newline setelah menginput nim

    printf("Masukkan kom : ");
    gets(kom); // membaca input string

    printf("Masukkan ip : ");
    scanf("%f", &ip); // tipe float (desimal)

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); // membaca satu karakter tanpa menekan enter dan tidak menampilkannya di layar
}
