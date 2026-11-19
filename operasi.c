#include <stdio.h> // mengimpor fitur standar input/output

int main() {
    int a = 13;
    int b = 7;
    int hasil = a % b;
    printf("answer : %d", hasil);

    // %d : Menampilkan bilangan bulat bertanda (signed integer)-> 4 bytes
    // %f: Menampilkan bilangan desimal pecahan (float)-> 4 bytes
    // %lf: Menampilkan bilangan desimal dengan presisi ganda (double)-> 8 bytes
    // %c: Menampilkan satu karakter (char)-> 1 byte

    // int ; // Bilangan bulat
    // float ; // Decimal tunggal
    // double ; // Decimal ganda
    // char ; // Teks

    // int umur;

    // printf("masukkan umur anda : ");
    // scanf("%d", &umur);
    // printf("umur anda adalah : %d", umur);

    // int tahun_lahir;
    

    // printf("Masukkan Tahun Lahir anda : ");
    // scanf("%d", &tahun_lahir);
    // printf("Tahun lahir anda adalah : %d\n", tahun_lahir);

    return 0;
}