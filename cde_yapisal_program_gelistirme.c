#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void _3_16(){
    double toplamBolum = 0;
    double girdiSayisi = 0;
    while(1){
        double km, litre;
        printf("Kullanilan litreyi giriniz (bitirmek icin -1): ");
        scanf("%lf", &litre);
        if(litre == -1){
            break;
        }
        printf("Gidilen kilometreyi giriniz: ");
        scanf("%lf", &km);

        double kmBasinaLt = litre/km;
        double ltYuzKm = kmBasinaLt*100;
        printf("Bu depo icin Lt/100km: %lf\n", ltYuzKm);

        toplamBolum += ltYuzKm;
        girdiSayisi++;
    }

    double genelOrt = toplamBolum / girdiSayisi;
    printf("Genel ortalama: %lf", genelOrt);
}

void _3_17(){
    while(1){
        int hesapNum;
        double baslangicBakiye;
        double toplamGider;
        double toplamGelir;
        double krediLimiti;

        printf("Hesap numarasi giriniz (bitirmek icin -1): ");
        scanf("%d", &hesapNum);
        if(hesapNum == -1){
            break;
        }

        printf("Baslangic bakiyesi giriniz: ");
        scanf("%lf", &baslangicBakiye);
        printf("Toplam harcamayi giriniz: ");
        scanf("%lf", &toplamGider);
        printf("Toplam yatirilani giriniz: ");
        scanf("%lf", &toplamGelir);
        printf("Kredi limitini giriniz: ");
        scanf("%lf", &krediLimiti);

        double yeniBakiye = baslangicBakiye + toplamGider - toplamGelir;
        if(yeniBakiye > krediLimiti){
            printf("Hesap numarasi: %d\n", hesapNum);
            printf("Kredi limiti: %lf\n", krediLimiti);
            printf("Yeni bakiye: %lf\n", yeniBakiye);
            printf("Kredi limiti asildi!\n");
        }
    }
}

void _3_18(){
    while(1){
        double satislar;
        printf("Satislari girin (bitirmek icin -1): ");
        scanf("%lf", &satislar);
        if(satislar == -1){
            break;
        }

        double komisyon = satislar * 9 / 100;
        double maas = 200 + komisyon > 650 ? 650 : 200 + komisyon;
        printf("Maas miktari: %.2f $\n", maas);
    }
}

void _3_19(){
    while(1){
        double anaPara;
        printf("Anaparayi girin (bitirmek icin -1): ");
        scanf("%lf", &anaPara);
        if(anaPara == -1){
            break;
        }

        double faizOrani;
        int krediDonemi;
        printf("Faiz orani girin: ");
        scanf("%lf", &faizOrani);
        printf("Kredi donemi girin: ");
        scanf("%d", &krediDonemi);

        double faiz = anaPara * faizOrani * krediDonemi / 365;
        printf("Faiz miktari: %.2f\n", faiz);
    }
}

void _3_20(){
    while(1){
        int saat;
        printf("Calisilan saati giriniz (bitirmek icin -1): ");
        scanf("%d", &saat);
        if(saat == -1){
            break;
        }

        double saatUcreti;
        printf("Saat ucretini giriniz: ");
        scanf("%lf", &saatUcreti);

        double maas = saat <= 40 ? saat * saatUcreti : (40 * saatUcreti) + ((saat - 40) * (saatUcreti * 1.5));
        printf("Maas: %.2f $\n", maas);
    }
}

void _3_21(){
    int a = 5;
    int b = 5;

    int onceden = --a;
    printf("Onceden azaltma: %d\n", onceden);

    int sonradan = b--;
    printf("Sonradan azaltma: %d\n", sonradan);
}

void _3_22(){
    for(int i = 1; i <= 10; i++){
        printf("%d   ", i);
    }
    printf("\n");
}

void _3_23(){
    int c = 1;
    int enBuyuk = 0;
    while(c != 10){
        unsigned int mevcut;
        printf("%d. sayiyi giriniz: ", c);
        scanf("%d", &mevcut);
        if(mevcut > enBuyuk){
            enBuyuk = mevcut;
        }
        c += 1;
    }
    printf("En buyuk sayi: %d", enBuyuk);
}

void _3_24(){
    printf("N\t10*N\t100*N\t1000*N\n");
    for(int i = 1; i <= 10; i++){
        printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000);
    }
}

void _3_25(){
    printf("A\tA+2\tA+4\tA+6\n");
    for(int i = 3; i <= 15; i += 3){
        printf("%d\t%d\t%d\t%d\n", i, i+2, i+4, i+6);
    }
}

void _3_26(){
    int c = 1;
    int enBuyuk = 0;
    int enBuyukIkinci = 0;
    while(c != 10){
        unsigned int mevcut;
        printf("%d. sayiyi giriniz: ", c);
        scanf("%d", &mevcut);
        if(mevcut > enBuyuk){
            enBuyukIkinci = enBuyuk;
            enBuyuk = mevcut;
        }else if(enBuyukIkinci < mevcut && mevcut < enBuyuk){
            enBuyukIkinci = mevcut;
        }
        c += 1;
    }
    printf("En buyuk sayi: %d\n", enBuyuk);
    printf("En buyuk ikinci sayi: %d\n", enBuyukIkinci);
}

void _3_27(){
    while(1){
        int girdi;
        printf("Girdi: ");
        scanf("%d", &girdi);
        if(girdi != 1 && girdi != 2){
            printf("Hatali giris. Tekrar dene\n");
        }else{
            printf("Dogru giris.\n");
            break;
        }
    }
}

// 3.27 - 3.31 sarkan if else örnekleri

void _3_32(){
    double kenarUzunluk;
    printf("kare kenar uzunlugu: ");
    scanf("%lf", &kenarUzunluk);

    if(!(1 <= kenarUzunluk && kenarUzunluk <= 20)){
        printf("Kenar uzunlugu 1 ile 20 arasinda olmali.");
        return;
    }

    for(int i = 1; i <= kenarUzunluk; i++){
        for(int j = 1; j <= kenarUzunluk; j++){
            printf("*");
        }
        printf("\n");
    }
}

void _3_33(){
    double kenarUzunluk;
    printf("kare kenar uzunlugu: ");
    scanf("%lf", &kenarUzunluk);

    if(!(1 <= kenarUzunluk && kenarUzunluk <= 20)){
        printf("Kenar uzunlugu 1 ile 20 arasinda olmali.");
        return;
    }

    for(int i = 1; i <= kenarUzunluk; i++){
        for(int j = 1; j <= kenarUzunluk; j++){
            if(i == 1 || i == kenarUzunluk){
                printf("*");
            }else{
                if(j == 1 || j == kenarUzunluk){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void _3_34(){
    int sayi;
    printf("test edilecek sayi: ");
    scanf("%d", &sayi);
    if(!(10000 <= sayi && sayi <= 99999)){
        printf("Sayi bes basamakli olmalidir.");
        return;
    }

    int birler, onlar, yuzler, binler, onbinler;
    int adim = 0;
    while(sayi != 0){
        int r = sayi%10;
        sayi = (sayi - r) / 10;
        adim += 1;

        if(adim == 1){
            birler = r;
            continue;
        }

        if(adim == 2){
            onlar = r;
            continue;
        }

        if(adim == 3){
            yuzler = r;
            continue;
        }

        if(adim == 4){
            binler = r;
            continue;
        }

        if(adim == 5){
            onbinler = r;
            continue;
        }
    }

    if(birler == onbinler && onlar == binler){
        printf("Palindrom!");
    }else{
        printf("Palindrom degil.");
    }
}

void _3_35(){
    int sayi;
    printf("ikilik sistemde sayi: ");
    scanf("%d", &sayi);

    int onlukSayi = 0;
    int adim = 0;
    int cacheSayi = sayi;
    while(sayi != 0){
        int r = sayi%10;
        sayi = (sayi - r) / 10;
        onlukSayi += r * pow(2, adim);
        adim += 1;
    }
    printf("2(%d) = 10(%d)\n", cacheSayi, onlukSayi);
}

// 3.36 bilgisayariniz ne kadar hizli, 100 milyona kadar loop

void _3_37(){
    int c = 1;
    while(c<=100){
        printf("*");
        if(c%10==0){
            printf("\n");
        }
        c+=1;
    }
}

void _3_38(){
    int sayi;
    printf("sayi giriniz: ");
    scanf("%d", &sayi);

    int yediSayisi = 0;
    while(sayi != 0){
        int r = sayi%10;
        sayi = (sayi - r) / 10;
        if(r == 7){
            yediSayisi += 1;
        }
    }
    printf("Yedi sayisi: %d", yediSayisi);
}

void _3_39(){
    for(int i = 1; i <= 8; i++){
        if(i%2==0){
            printf("%s", " ");
        }

        for(int j = 1; j<=9; j++){
            printf("%s", "* ");
        }

        puts("");
    }
}

// 3.40 sonsuz dongu
// 3.41 onceki bolumde benzeri yapildi
// 3.42 yanlis tespiti

void _3_43(){
    int sayi1, sayi2, sayi3;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);

    if(sayi1 == 0 || sayi2 == 0 || sayi3 == 0){
        printf("Sayilardan biri sifir.");
        return;
    }

    if(sayi1+sayi2>sayi3 && sayi1+sayi3>sayi2 && sayi2+sayi3>sayi1){
        printf("Ucgenin kenarlari olabilir.");
    }else{
        printf("Ucgenin kenarlari olamaz.");
    }
}

void _3_44(){
    int sayi1, sayi2, sayi3;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);

    if(sayi1 == 0 || sayi2 == 0 || sayi3 == 0){
        printf("Sayilardan biri sifir.");
        return;
    }

    if(!(sayi1+sayi2>sayi3 && sayi1+sayi3>sayi2 && sayi2+sayi3>sayi1)){
        printf("Ucgenin kenarlari olamaz.");
        return;
    }

    if(pow(sayi1,2) + pow(sayi2, 2) == pow(sayi3, 2) || pow(sayi1,2) + pow(sayi3, 2) == pow(sayi2, 2) || pow(sayi2,2) + pow(sayi3, 2) == pow(sayi1, 2)){
        printf("Dik ucgendir.");
    }else{
        printf("Dik ucgen degildir.");
    }
}

void _3_45(){
    int sayi;
    printf("sayi giriniz: ");
    scanf("%d", &sayi);

    int faktoriyel = 1;
    for(int i = 1; i<=sayi; i++){
        faktoriyel *= i;
    }
    printf("%d! = %d", sayi, faktoriyel);
}

void _3_46(){
    double mevcutNufus, yillikArtisOrani;
    printf("Mevcut nufusu giriniz: ");
    scanf("%d", &mevcutNufus);
    printf("Yillik nufus artis oranini giriniz: ");
    scanf("%lf", &yillikArtisOrani);

    for(int i = 1; i<=5; i++){
        mevcutNufus += mevcutNufus * yillikArtisOrani / 100;
        printf("%d. yilda nufus: %d\n", i, mevcutNufus);
    }
}

void _3_47(){
    int yas; // dogum gunu hesabi yapilabilir ama gereksiz.
    printf("Yas: ");
    scanf("%d", &yas);
    int enYuksekAtisHizi = 220 - yas;
    int minHedefAtisHizi = enYuksekAtisHizi * 50 / 100;
    int maxHedefAtisHizi = enYuksekAtisHizi * 85 / 100;
    printf("Hedef atis hizi %d ile %d arasindadir.", minHedefAtisHizi, maxHedefAtisHizi);
}

// 3.48 Anlasilabilir degil. Anlatima gore birden fazla veri ayný sifreyi verir.

int main(void){
    // _3_16();
    // _3_17();
    // _3_18();
    // _3_19();
    // _3_20();
    // _3_21();
    // _3_22();
    // _3_23();
    // _3_24();
    // _3_25();
    // _3_26();
    // _3_27();
    // _3_32();
    // _3_33();
    // _3_34();
    // _3_35();
    // _3_37();
    // _3_38();
    // _3_39();
    // _3_43();
    // _3_44();
    // _3_45();
    // _3_46();
    // _3_47();
}
