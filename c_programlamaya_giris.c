#include <stdio.h>
#include <stdlib.h>

void _2_16(){
    int sayi1, sayi2;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    int toplam = sayi1 + sayi2;
    int carpim = sayi1 * sayi2;
    int fark = sayi1 - sayi2;
    int bolum = sayi1 / sayi2;
    int kalan = sayi1 % sayi2;

    printf("toplam: %d\n", toplam);
    printf("carpim: %d\n", carpim);
    printf("fark: %d\n", fark);
    printf("bolum: %d\n", bolum);
    printf("kalan: %d\n", kalan);
}

void _2_17(){
    printf("1 2 3 4\n");
    printf("%d %d %d %d\n",1,2,3,4);
    printf("1 ");printf("2 ");printf("3 ");printf("4\n");
}

void _2_18(){
    int sayi1, sayi2;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if(sayi1 > sayi2){
        printf("sayi1 daha buyuk\n");
    }else{
        if(sayi1 == sayi2){
            printf("sayilar esit\n");
        }else{
            printf("sayi2 daha buyuk\n");
        }
    }
}

void _2_19(){
    int sayi1, sayi2, sayi3;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);

    int toplam = sayi1 + sayi2 + sayi3;
    int ort = toplam / 3;
    int carpim = sayi1 * sayi2 * sayi3;

    int enKucuk, enBuyuk;
    if(sayi1 < sayi2){
        if(sayi2 < sayi3){
            enBuyuk = sayi3;
            enKucuk = sayi1;
        }else{
            enBuyuk = sayi2;

            if(sayi1 < sayi3){
                enKucuk = sayi1;
            }else{
                enKucuk = sayi3;
            }
        }
    }else{
        if(sayi2 > sayi3){
            enBuyuk = sayi1;
            enKucuk = sayi3;
        }else{
            enKucuk = sayi2;
            if(sayi1 > sayi3){
                enBuyuk = sayi1;
            }else{
                enBuyuk = sayi3;
            }
        }
    }

    printf("toplam: %d\n", toplam);
    printf("ortalama: %d\n", ort);
    printf("carpim: %d\n", carpim);
    printf("en kucuk: %d\n", enKucuk);
    printf("en buyuk: %d\n", enBuyuk);
}

void _2_20(){
    float yaricap;
    float pi = 3.14159;

    printf("cemberin yaricapini gir: ");
    scanf("%f", &yaricap);

    printf("cap: %f\n", yaricap*2);
    printf("cevre: %f\n", 2*pi*yaricap);
    printf("alan: %f\n", pi*(yaricap*yaricap));
}

void _2_21(){
    printf(" *********    ***      *         *     \n");
    printf(" *       *   *   *    ***       * *    \n");
    printf(" *       *  *     *  *****     *   *   \n");
    printf(" *       *  *     *    *      *     *  \n");
    printf(" *       *  *     *    *     *       * \n");
    printf(" *       *  *     *    *      *     *  \n");
    printf(" *       *  *     *    *       *   *   \n");
    printf(" *       *   *   *     *        * *    \n");
    printf(" *********    ***      *         *     \n");
}

void _2_23(){
    int sayi1, sayi2, sayi3;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);

    int enKucuk, enBuyuk;
    if(sayi1 < sayi2){
        if(sayi2 < sayi3){
            enBuyuk = sayi3;
            enKucuk = sayi1;
        }else{
            enBuyuk = sayi2;

            if(sayi1 < sayi3){
                enKucuk = sayi1;
            }else{
                enKucuk = sayi3;
            }
        }
    }else{
        if(sayi2 > sayi3){
            enBuyuk = sayi1;
            enKucuk = sayi3;
        }else{
            enKucuk = sayi2;
            if(sayi1 > sayi3){
                enBuyuk = sayi1;
            }else{
                enBuyuk = sayi3;
            }
        }
    }
    printf("en kucuk: %d\n", enKucuk);
    printf("en buyuk: %d\n", enBuyuk);
}

void _2_24(){
    int sayi;
    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);
    printf("Sayi %s\n", (sayi % 2 == 0)?"cift":"tek");
}

void _2_25(){
    printf(" S SSS \n");
    printf(" S S S \n");
    printf(" SSS S \n");
    printf("       \n");
    printf(" OOOOO \n");
    printf(" O   O \n");
    printf(" OOOOO \n");
}

void _2_26(){
    int sayi1, sayi2;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf((sayi1%sayi2==0)?"kat\n":"kat degil\n");
}

void _2_27(){
    int i = 1;
    while(i!=4){
        printf("********\n");
        printf(" ********\n");
        i++;
    }
}

void _2_29(){
    printf("%d\n", 'A');
    printf("%d\n", 'B');
    printf("%d\n", 'C');
    printf("%d\n", 'a');
    printf("%d\n", 'b');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');
}

void _2_30(){
    int sayi;
    printf("Bes basamakli sayiyi giriniz: ");
    scanf("%d", &sayi);
    int onbinler = sayi/10000;
    sayi = sayi%10000;
    int binler = sayi/1000;
    sayi = sayi%1000;
    int yuzler = sayi/100;
    sayi = sayi%100;
    int onlar = sayi/10;
    sayi = sayi%10;
    int birler = sayi;
    printf("%d %d %d %d %d", onbinler, binler, yuzler, onlar, birler);
}

void _2_31(){
    printf("Sayi   Kare   Kup\n");
    int i = 0;
    while(i!=11){
        printf("%d      %d      %d\n", i, i*i, i*i*i);
        i++;
    }
}

void _2_32(){
    printf("VKI degerleri\n");
    printf("Dusuk kilolu: 18.5\'den az\n");
    printf("Normal: 18.5 ile 24.9 arasinda\n");
    printf("Yuksek kilolu: 25 ile 29.9 arasinda\n");
    printf("Obez: 30 ya da daha yuksek\n");

    double agirlik, boy;
    printf("Kg olarak agirlik: ");
    scanf("%lf", &agirlik);
    printf("Metre olarak boy: ");
    scanf("%lf", &boy);
    double vki = agirlik/(boy*boy);
    printf("vki degeriniz: %lf", vki);
}

void _2_33(){
    double yol, litreFiyati, ortalamaYakit, gunlukPark, gunlukGecis;
    int hariciKisiSayisi;
    printf("Gunluk gidilen yol: ");
    scanf("%lf", &yol);
    printf("Yakit litre fiyati: ");
    scanf("%lf", &litreFiyati);
    printf("Ortalama harcanan yakit litresi: ");
    scanf("%lf", &ortalamaYakit);
    printf("Gunluk park masrafi: ");
    scanf("%lf", &gunlukPark);
    printf("Gunluk otoban gecis masrafi: ");
    scanf("%lf", &gunlukGecis);
    printf("Harici kisi sayisi: ");
    scanf("%d", &hariciKisiSayisi);

    double harcanan = gunlukPark + gunlukGecis + (yol * ortalamaYakit * litreFiyati);
    printf("Tek basiniza her gun %lf araba harcamasi yapiyorsunuz.", harcanan);
    printf("Eger arabanizi %d kisi ile paylasir ve maliyeti bolusurseniz %lf tasarruf edeceksiniz.", hariciKisiSayisi, (harcanan/(hariciKisiSayisi+1))*hariciKisiSayisi);
}

int main(void){

    // _2_16();
    // _2_17();
    // _2_18();
    // _2_19();
    // _2_20();
    // _2_21();
    // _2_23();
    // _2_24();
    // _2_25();
    // _2_26();
    // _2_27();
    // _2_29();
    // _2_30();
    // _2_31();
    // _2_32();
    // _2_33();
    return 0;
}
