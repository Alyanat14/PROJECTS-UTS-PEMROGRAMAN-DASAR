// Nama Projects    : Mengenal dan Menentukan Zodiak dan Shio Kita
// Pembuat Projects : Alya Rizky Natasya
// NIM              : 202102011013
// Prodi            : Informatika
// Tanggal ujian    : Rabu, 03/11/2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("..Pilihan Tahun Kelahiran Kamu..\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::\n");


    printf("1.  1900, 1912, 1924, 1936, 1948, 1960, 1972, 1984, 1996, 2008                     \n");
    printf("2.  1901, 1913, 1925, 1937, 1949, 1961, 1973, 1985, 1997, 2009                     \n");
    printf("3.  1902, 1914, 1926, 1938, 1950, 1962, 1974, 1986, 1998, 2010                     \n");
    printf("4.  1903, 1915, 1927, 1939, 1951, 1963, 1975, 1987, 1999, 2011                     \n");
    printf("5.  1904, 1916, 1928, 1940, 1952, 1964, 1976, 1988, 2000, 2012                     \n");
    printf("6.  1905, 1917, 1929, 1941, 1953, 1965, 1977, 1989, 2001, 2013                     \n");
    printf("7.  1906, 1918, 1930, 1942, 1954, 1966, 1978, 1990, 2002, 2014                     \n");
    printf("8.  1907, 1919, 1931, 1943, 1955, 1967, 1979, 1991, 2003, 2015                     \n");
    printf("9.  1908, 1920, 1932, 1944, 1956, 1968, 1980, 1992, 2004, 2016                     \n");
    printf("10. 1909, 1921, 1933, 1945, 1957, 1969, 1981, 1993, 2005, 2017                     \n");
    printf("11. 1910, 1922, 1934, 1946, 1958, 1970, 1982, 1994, 2006, 2018                     \n");
    printf("12. 1911, 1923, 1935, 1947, 1959, 1971, 1983, 1995, 2007, 2019                     \n");

    printf("\n Masukkan pilihan Tahun Kelahiran Kamu: ");
    scanf("%d", &a);

     switch(a){
    case 1:
        printf("------------Shio kamu Tikus------------\n\n");       break;
    case 2:
        printf("-------------Shio kamu Kerbau------------\n\n");     break;
    case 3:
        printf("-------------Shio kamu Macan--------------\n\n");    break;
    case 4:
        printf("------------Shio kamu Kelinci----------------\n\n"); break;
    case 5:
        printf("------------Shio kamu Naga--------------\n\n");      break;
    case 6:
        printf("--------------Shio kamu Ular------------\n\n");      break;
    case 7:
        printf("-------------Shio kamu Kuda-------------\n\n");      break;
    case 8:
        printf("----------------Shio kamu Kambing-------------\n\n");break;
    case 9:
        printf("--------------Shio kamu Monyet-------------\n\n");   break;
    case 10:
        printf("--------------Shio kamu Ayam-------------\n\n");     break;
    case 11:
        printf("--------------Shio kamu Anjing-----------\n\n");     break;
    case 12:
        printf("------------Shio kamu Babi----------\n\n");          break;

      }
    return 0;
}
