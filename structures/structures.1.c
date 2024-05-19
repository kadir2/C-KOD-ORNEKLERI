#include <stdio.h>
#include <string.h>

// Öğrenci yapısı
struct Ogrenci {
    char ad[50];
    char soyad[50];
    int numara;
    int sinif;
    
};

int main() {
    // Bir öğrenci yapısından bir öğrenci oluşturma
    struct Ogrenci ogrenci1;

    // Bilgileri atama
    strcpy(ogrenci1.ad, "Ahmet");
    strcpy(ogrenci1.soyad, "Yilmaz");
    ogrenci1.numara = 12345;
    ogrenci1.sinif = 10;

    // Bilgileri yazdırma
    printf("Ad: %s\n", ogrenci1.ad);
    printf("Soyad: %s\n", ogrenci1.soyad);
    printf("Numara: %d\n", ogrenci1.numara);
    printf("Sınıf: %d\n", ogrenci1.sinif);

    return 0;
}
