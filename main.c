// Nama Projects    : Mengenal dan Menentukan Zodiak Kita
// Pembuat Projects : Alya Rizky Natasya
// NIM              : 202102011013
// Prodi            : Informatika
// Tanggal ujian    : Rabu, 03/11/2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
    system ("color 71");
    int bulan , tanggal;

    printf("\t\t\t\t\:::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t\t\..Masukkan Angka Bulan Lahir Kamu..\n\n");
    printf("\t\t\t\t\:::::::::::::::::::::::::::::::::::::::::::::\n");
    printf ("                                                      ");scanf("%d", &bulan);
    printf("\t\t\t\t\:::::::::::::::::::::::::::::::::::::::::::::\n");

    printf("\t\t\t\t\t\....Masukkan Tanggal Lahir Kamu....\n\n");
    printf("\t\t\t\t\:::::::::::::::::::::::::::::::::::::::::::::\n");
    printf ("                                                      ");scanf("%d", &tanggal);

    if( (bulan == 12 && tanggal >= 22) | (bulan == 1 && tanggal <= 19) )
    {
    printf("\t\t\t\t------------Zodiak kamu Capricorn------------\n\n");
    }
    else if( (bulan == 1 && tanggal >= 20) | (bulan == 2 && tanggal <= 17) )
    {
    printf("\t\t\t\t-------------Zodiak kamu Aquarius------------\n\n");
    }
    else if( (bulan == 2 && tanggal >= 18) | (bulan == 3 && tanggal <= 19) )
    {
    printf("\t\t\t\t-------------Zodiak kamu Pisces--------------\n\n");
    }
    else if( (bulan == 3 && tanggal >= 20) | (bulan == 4 && tanggal <= 19) )
    {
    printf("\t\t\t\t------------Zodiak kamu Aries----------------\n\n");
    }
    else if( (bulan == 4 && tanggal >= 20) | (bulan == 5 && tanggal <= 20) )
    {
    printf("\t\t\t\t------------Zodiak kamu Taurus--------------\n\n");
    }
    else if( (bulan == 5 && tanggal >= 21) | (bulan == 6 && tanggal <= 20) )
    {
    printf("\t\t\t\t--------------Zodiak kamu Gemini------------\n\n");
    }
    else if( (bulan == 6 && tanggal >= 21) | (bulan == 7 && tanggal <= 22) )
    {
    printf("\t\t\t\t-------------Zodiak kamu Cancer-------------\n\n");
    }
    else if( (bulan == 7 && tanggal >= 23) | (bulan == 8 && tanggal <= 22) )
    {
    printf("\t\t\t\t----------------Zodiak kamu Leo-------------\n\n");
    }
    else if( (bulan == 8 && tanggal >= 23) | (bulan== 9 && tanggal <= 22) )
    {
    printf("\t\t\t\t--------------Zodiak kamu Virgo-------------\n\n");
    }
    else if( (bulan == 9 && tanggal >= 23) | (bulan == 10 && tanggal <= 22) )
    {
    printf("\t\t\t\t--------------Zodiak kamu Libra-------------\n\n");
    }
    else if( (bulan == 10 && tanggal >= 23) | (bulan == 11 && tanggal <= 21) )
    {
    printf("\t\t\t\t--------------Zodiak kamu Scorpio-----------\n\n");
    }
    else if( (bulan == 11 && tanggal >= 22) | (bulan == 12 && tanggal <= 21) )
    {
    printf("\t\t\t\t------------Zodiak kamu Sagitarius----------\n\n");
    }
    else
    {
    printf("\t\t\t\tTanggal lahir dan Bulan lahir yang dimasukkan tidak valid\n\n");
    }

    }

    return 0;
}
