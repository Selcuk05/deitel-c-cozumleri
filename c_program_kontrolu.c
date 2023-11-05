#include <stdio.h>
#include <stdlib.h>

void _4_9(){
    unsigned int sefer;
    printf("Kac sefer sayi alinacak: ");
    scanf("%d", &sefer);

    unsigned int sayac = 1;
    int toplam = 0;
    while(sayac <= sefer){
        int mevcutSayi;
        printf("%d. sayiyi girin: ", sayac);
        scanf("%d", &mevcutSayi);
        toplam += mevcutSayi;
        sayac += 1;
    }

    printf("Toplam: %d", toplam);
}

void _4_10(){
    int toplam = 0;
    int girilen = 0;
    while(1){
        int mevcutSayi;
        printf("Sayi giriniz (sonlandirmak icin 9999): ");
        scanf("%d", &mevcutSayi);
        if(mevcutSayi == 9999){
            break;
        }
        toplam += mevcutSayi;
        girilen += 1;
    }
    int ort = toplam / girilen;
    printf("Ortalama: %d", ort);
}

void _4_11(){
    unsigned int sefer;
    printf("Kac sefer sayi alinacak: ");
    scanf("%d", &sefer);

    unsigned int sayac = 1;
    int enKucuk;
    while(sayac <= sefer){
        int mevcutSayi;
        printf("%d. sayiyi girin: ", sayac);
        scanf("%d", &mevcutSayi);

        if(sayac == 1 || mevcutSayi < enKucuk){
            enKucuk = mevcutSayi;
        }

        sayac += 1;
    }

    printf("En kucuk sayi: %d", enKucuk);
}

void _4_12(){
    unsigned int sayac = 2;
    int toplam = 0;
    while(sayac != 31){
        if(sayac%2==0){
            toplam += sayac;
        }
        sayac++;
    }
    printf("Toplam: %d", toplam);
}

void _4_13(){
    unsigned int sayac = 1;
    int toplam = 0;
    while(sayac != 16){
        if(sayac%2!=0){
            toplam += sayac;
        }
        sayac++;
    }
    printf("Toplam: %d", toplam);
}

void _4_14(){
    printf("Sayi\tFaktoriyel\n");
    for(int i = 1; i <= 5; i++){
        int faktoriyel = 1;
        for(int j = 1; j <= i; j++){
            faktoriyel *= j;
        }
        printf("%d\t%d\n", i, faktoriyel);
    }
}

void _4_16(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 10; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 10; i >= 1; i--){
        for(int k = 1; k <= 10 - i; k++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= 10; i++){
        for(int k = 1; k <= 10 - i; k++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }
}

void _4_17(){
    unsigned int hesapNum;
    unsigned int oncekiLimit;
    unsigned int balans;
    printf("Hesap numarasi giriniz: ");
    scanf("%d", &hesapNum);
    printf("Eski kredi limitini giriniz: ");
    scanf("%d", &oncekiLimit);
    printf("Mevcut balansi giriniz: ");
    scanf("%d", &balans);

    unsigned int yeniLimit = oncekiLimit / 2;
    printf("Hesap numaraniz: %d\n", hesapNum);
    printf("Balansiniz kredi limitini %s", balans > yeniLimit ? "asiyor.\n" : "asmiyor.\n");
}

void _4_18(){
    for(int i = 1; i <= 5; i++){
        unsigned int mevcutSayi;
        printf("5 ile 30 arasi sayi giriniz: ");
        scanf("%d", &mevcutSayi);
        if(5 <= mevcutSayi && mevcutSayi <= 30){
            for(int j = 1; j <= mevcutSayi; j++){
                printf("%s", "*");
            }
            printf("\n");
        }
    }
}

void _4_19(){
    unsigned int kategori;
    double adet;
    printf("Urun numarasi ve satilan adedi giriniz (arada bosluk olmali): ");
    scanf("%d %d", &kategori, &adet);
    switch (kategori)
    {
    case 1:
        printf("%d", adet * 2.98);
        break;
    case 2:
        printf("%d", adet * 4.50);
        break;
    case 3:
        printf("%d", adet * 9.98);
        break;
    case 4:
        printf("%d", adet * 4.49);
        break;
    case 5:
        printf("%d", adet * 6.87);
        break;
    }
}

int main(void){
    // _4_9();
    // _4_10();
    // _4_11();
    // _4_12();
    // _4_13();
    // _4_14();
    // _4_16();
    // _4_17();
    // _4_18();
    // _4_19();
}