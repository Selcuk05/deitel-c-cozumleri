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

void _4_25(){
    for(int s = 1; s <= 256; s++){
        printf("Ikilik: ");

        for (int i = 31; i >= 0; i--) { 
            int k = s >> i;
            if (k & 1){
                printf("1"); 
            }else{
                printf("0"); 
            }
        } 

        printf(", ");

        printf("Sekizlik: %o, On altilik: %X\n", s, s);
    }
}

// verilen sayilara tam olarak hic ulasmadi, aralarda dolasiyor
void _4_26(){
    double payda = 1;
    int sayac = 1;
    double pi = 0;
    printf("Terim\tPayda\t\tPi\n");
    while(pi != 3.14159){
        pi = pi + ((sayac % 2 == 0 ? -4 : 4) / payda);

        printf("%d\t%lf\t%lf\n", sayac, payda, pi);
        payda += 2;
        sayac += 1;
    }
}

void _4_27(){
    printf("Kenar 1\tKenar 2\tHipotenus\n");
    for(int i = 1; i < 500; i++){
        for(int j = 1; j < 500; j++){
            for(int k = 1; k < 500; k++){
                if(i*i + j*j == k*k){
                    printf("%d\t%d\t%d\n", i, j, k);
                }
            }
        }
    }
}

void _4_28(){
    int odemeKodu;
    puts("[1] Mudur");
    puts("[2] Saatlik calisan");
    puts("[3] Siparis calisani");
    puts("[4] Parca calisani");
    printf("Odeme kodu giriniz: ");
    scanf("%d", &odemeKodu);

    double sabitMaas;
    double sabitSaatUcreti;
    int calisilanSaat;
    double haftalikSatis;
    double parcaSabitUcreti;
    int parcaSayisi;
    switch(odemeKodu){
        case 1:
            printf("Sabit haftalik mudur maasi: ");
            scanf("%lf", &sabitMaas);
            printf("Haftalik mudur maasi: %lf\n", sabitMaas);
            break;
        case 2:
            printf("Sabit saat ucreti: ");
            scanf("%lf", &sabitSaatUcreti);
            printf("Calisilan saat: ");
            scanf("%d", &calisilanSaat);

            double maas = (calisilanSaat <= 40) ? (calisilanSaat * sabitSaatUcreti) : (40 * sabitSaatUcreti + (calisilanSaat - 40) * sabitSaatUcreti * 1.5);
            printf("Haftalik saatlik calisan maasi: %lf\n", maas);
            break;
        case 3:
            printf("Haftalik brut satis: ");
            scanf("%lf", &haftalikSatis);

            maas = 250 + (haftalikSatis * 5.7) / 100;
            printf("Haftalik siparis calisani maasi: %lf\n", maas);
            break;
        case 4:
            printf("Parca sabit ucreti: ");
            scanf("%lf", &parcaSabitUcreti);
            printf("Parca sayisi: ");
            scanf("%d", &parcaSayisi);

            maas = parcaSabitUcreti * parcaSayisi;
            printf("Haftalik parca calisani maasi: %lf\n", maas);
            break;
        default:
            break;
    }
}

void _4_31(){
    for(int i = 1; i <= 9; i++){
        if(i%2==0) continue;

        int tarafBosluk = (9 - i) / 2;
        for(int bs = 1; bs <= tarafBosluk; bs++){
            printf(" ");
        }

        for(int y = 1; y <= i; y++){
            printf("*");
        }

        printf("\n");
    }

    for(int i = 7; i >= 1; i--){
        if(i%2==0) continue;

        int tarafBosluk = (9 - i) / 2;
        for(int bs = 1; bs <= tarafBosluk; bs++){
            printf(" ");
        }

        for(int y = 1; y <= i; y++){
            printf("*");
        }

        printf("\n");
    }
}

void _4_33(){
    printf("Sayi\tRoman\n");
    for(int i = 1; i <= 100; i++){
        int sayi = i;
        printf("%d\t", sayi);
        if(sayi == 100){
            printf("C");
            sayi = 0;
        }

        if(sayi >= 50){
            printf("L");
            sayi -= 50;
        }

        while(sayi >= 10) {
            printf("X"); 
            sayi -= 10;
        }

        if(sayi >= 5) {
            if(sayi % 10 == 9) {
                printf("IX");
                sayi -= 9;
            } else {
                printf("V");
                sayi -= 5;
            }   
        }

        while(sayi > 0) {
            if(sayi % 10 == 4) {
                printf("IV");
                sayi -= 4;
            } else {
                printf("I");
                sayi -= 1;
            }

        }

        printf("\n");
    }
}

void _4_38(){
    for(int i = 1; i<=3; i++){
        int sayi = i;
        printf("On the ");
        switch(sayi){
            case 3:
                printf("third");
                break;
            case 2:
                printf("second");
                break;
            case 1:
                printf("first");
                break;
        }
        printf(" day of Christmas my true love sent to me\n");
        switch(sayi){
            case 3:
                printf("Three French hens\n");
                sayi -= 1;
            case 2:
                printf("Two turtle doves\n");
                sayi -= 1;
            case 1:
                printf("And a partridge in a pear tree.\n");
        }

        printf("\n");
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
    // _4_25();
    // _4_26();
    // _4_27();
    // _4_28();
    // _4_31();
    // _4_33();
    // _4_38();
}