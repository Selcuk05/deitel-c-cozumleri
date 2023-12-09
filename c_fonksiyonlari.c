#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h> 

// 5.9
double calculateCharges(double hour){
    if(hour <= 3){
        return 2;
    }
    int charge = 2.0 + (hour - 3) * 0.5;
    return charge > 10 ? 10 : charge;
}

void _5_9(){
    double birinci, ikinci, ucuncu;
    for(int i = 1; i <= 3; i++){
        double saat;

        printf("Araba %d otopark saatini giriniz: ", i);
        scanf("%lf", &saat);

        switch(i){
            case 1:
                birinci = saat;
                break;
            case 2:
                ikinci = saat;
                break;
            case 3:
                ucuncu = saat;
                break;
        }
    }

    printf("Araba\tSaat\tUcret\n");
    
    double ucret1 = calculateCharges(birinci);
    double ucret2 = calculateCharges(ikinci);
    double ucret3 = calculateCharges(ucuncu);
    printf("%d\t%.1f\t%.2f\n", 1, birinci, ucret1);
    printf("%d\t%.1f\t%.2f\n", 2, ikinci, ucret2);
    printf("%d\t%.1f\t%.2f\n", 3, ucuncu, ucret3);

    double toplamUcret = ucret1 + ucret2 + ucret3;
    double toplamSaat = birinci + ikinci + ucuncu;
    printf("TOTAL\t%.1f\t%.2f\n", toplamSaat, toplamUcret);
}

void _5_10(){
    for(int i = 1; i <= 3; i++){
        double sayi;
        printf("Sayi giriniz: ");
        scanf("%lf", &sayi);

        double yuvarlanmis = floor(sayi + .5);
        printf("Sayi: %lf\n", sayi);
        printf("Yuvarlanmis: %lf\n", yuvarlanmis);
    }
}

// 5.11
int roundToInteger(double number){
    return floor(number + .5);
}

double roundToTenths(double number){
    return floor(number * 10 + .5) / 10;
}

double roundToHundreths(double number){
    return floor(number * 100 + .5) / 100;
}

double roundToThousandths(double number){
    return floor(number * 1000 + .5) / 1000;
}

void _5_11(){
    for(int i = 1; i <= 3; i++){
        double sayi;
        printf("Sayi giriniz: ");
        scanf("%lf", &sayi);

        int tamsayiYuvarlama = roundToInteger(sayi);
        double ondaYuvarlama = roundToTenths(sayi);
        double yuzdeYuvarlama = roundToHundreths(sayi);
        double bindeYuvarlama = roundToThousandths(sayi);
        printf("Sayi: %lf\n", sayi);
        printf("Tamsayiya yuvarlama: %d\n", tamsayiYuvarlama);
        printf("Onda birler yuvarlama: %lf\n", ondaYuvarlama);
        printf("Yuzde birler yuvarlama: %lf\n", yuzdeYuvarlama);
        printf("Binde birler yuvarlama: %lf\n", bindeYuvarlama);
        printf("\n");
    }
}

// 5.15
double hypotenuse(double a, double b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

void _5_15(){
    printf("%lf, %lf, hipotenus: %lf\n", 3.0, 4.0, hypotenuse(3, 4));
    printf("%lf, %lf, hipotenus: %lf\n", 5.0, 12.0, hypotenuse(5, 12));
    printf("%lf, %lf, hipotenus: %lf\n", 8.0, 15.0, hypotenuse(8, 15));
}

int integerPower(int base, unsigned int exponent){
    int power = 1;
    for(int i = 1; i <= exponent; i++){
        power *= base;
    }
    return power;
}

void _5_16(){
    printf("%d, %d, ussu: %d\n", 3, 4, integerPower(3, 4));
}

// 5.17
int multiple(int a, int b){
    return a % b == 0;
}

void _5_17(){
    for(int i = 1; i <= 3; i++){
        int sayi, katsayi;
        printf("Sayi giriniz: ");
        scanf("%d", &sayi);

        printf("Katsayi giriniz: ");
        scanf("%d", &katsayi);

        printf(multiple(sayi, katsayi) ? "Katsayisidir.\n" : "Katsayisi degildir.\n");
    }
}

// 5.18
int even(int a){
    return a % 2 == 0;
}

void _5_18(){
    for(int i = 1; i <= 3; i++){
        int sayi;
        printf("Sayi giriniz: ");
        scanf("%d", &sayi);

        printf(even(sayi) ? "Cift\n" : "Tek\n");
    }
}

// 5.19
void squarePrint(int side){
    for(int i = 1; i <= side; i++){
        for(int j = 1; j <= side; j++){
            printf("*");
        }
        printf("\n");
    }
}

void _5_19(){
    squarePrint(4);
}

// 5.20
void squarePrintFill(int side, char fillCharacter){
    for(int i = 1; i <= side; i++){
        for(int j = 1; j <= side; j++){
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}

void _5_20(){
    squarePrintFill(4, '#');
}

// 5.22
int bolum(int a, int b){
    return a / b;
}

int kalan(int a, int b){
    return a % b;
}

void basamak(int sayi){
    if(sayi == 0){
        return;
    }

    int k = kalan(sayi, 10);
    int b = bolum(sayi, 10);

    basamak(b);

    printf("%d  ", k);
}

void _5_22(){
    unsigned short int sayi;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    basamak(sayi);
}

// 5.23
int gecenSaniye(int saat, int dakika, int saniye){
    int toplamSaniye = 0;
    if(saat >= 12){
        saat -= 12;
    }
    toplamSaniye += saat * 60 * 60;
    toplamSaniye += dakika * 60;
    toplamSaniye += saniye;
    return toplamSaniye;
}

void _5_23(){
    int saat, dakika, saniye;
    printf("Saat giriniz: ");
    scanf("%d", &saat);
    printf("Dakika giriniz: ");
    scanf("%d", &dakika);
    printf("Saniye giriniz: ");
    scanf("%d", &saniye);
    printf("Son 12\'den itibaren gecen saniye: %d", gecenSaniye(saat, dakika, saniye));
}

// 5.24
double celcius(double fahrenheitDegree){
    double c = (fahrenheitDegree - 32) * 5 / 9;
    return c;
}

double fahrenheit(double celciusDegree){
    double f = (celciusDegree * 9 / 5) + 32;
    return f;
}

void _5_24(){
    printf("Celcius\tFahrenheit\n");
    for(int i = 0; i <= 100; i++){
        printf("%d\t%lf\n", i, fahrenheit(i));
    }

    printf("\n");
    printf("Fahrenheit\tCelcius\n");
    for(int i = 32; i <= 212; i++){
        printf("%d\t%lf\n", i, celcius(i));
    }
}

// 5.25
double enKucuk(double a, double b, double c){
    double enKucuk;
    if(b < a){
        enKucuk = b;
        if(c < b){
            enKucuk = c;
        }
    }else{
        enKucuk = a;
        if(c < a){
            enKucuk = c;
        }
    }

    return enKucuk;
}

void _5_25(){
    printf("Sayilar: %.1f, %.1f, %.1f\n", 4.2, 3.5, 6.8);
    printf("En kucuk: %.1f", enKucuk(4.2, 3.5, 6.9));
}

// 5.26
int perfect(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum == number;
}

void _5_26(){
    for(int i = 1; i <= 1000; i++){
        if(perfect(i)){
            printf("%d Mukemmel Sayi: ", i);
            for(int j = 1; j < i; j++){
                if(i % j == 0){
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
}

// 5.27
int prime(int number){
    if(number == 1 || number == 0){
        return 0;
    }

    if(number % 2 == 0){
        if(number == 2){
            return 1;
        }else{
            return 0;
        }
    }

    int c = 1;
    while(c <= number){
        if(number % c == 0 && (c != 1 && c != number)){
            return 0;
        }

        if(c == number){
            return 1;
        }

        c += 1;
    }
}

void _5_27(){
    int lastPrime;
    for(int c = 1; c <= 10000; c++){
        if(prime(c)){
            lastPrime = c;
        }
    }

    printf("10000\'den onceki en son asal: %d", lastPrime);
}

// 5.28
int reverse(int number){
    int stepCount = 0;
    int cacheNum = number;
    while(cacheNum != 0){
        cacheNum = cacheNum / 10;
        stepCount += 1;
    }
    printf("%d\n", stepCount);

    int reversed = 0;
    while(number != 0 && stepCount != 0){
        int curStep = number % 10;
        number = number / 10;
        reversed += curStep * pow(10, stepCount - 1);
        stepCount -= 1;
    }

    return reversed;
}

void _5_28(){
    printf("7631 tersten: %d\n", reverse(7631));
}

// 5.29
int gcd(int n1, int n2){
    int val = 1;
    for(int c = 1; c <= n1 && c <= n2; c++){
        if(n1 % c == 0 && n2 % c == 0){
            val *= c;
        }
    }

    return val;
}

void _5_29(){
    printf("15-50 EBOB: %d", gcd(15, 50));
}

// 5.30
int qualityPoints(int n1, int n2, int n3){
    int avg = (n1 + n2 + n3) / 3;
    if(90 <= avg && avg <= 100){
        return 4;
    }

    if(80 <= avg && avg <= 89){
        return 3;
    }

    if(70 <= avg && avg <= 79){
        return 2;
    }

    if(60 <= avg && avg <= 69){
        return 1;
    }

    return 0;
}

void _5_30(){
    int avgNote = qualityPoints(80, 60, 70);
    printf("Ortalama harf notu: %d", avgNote);
}

// 5.31
int flip(){
    int i = rand() % 2;
    if (i == 0)
        return 0;
    else
        return 1;
}

void _5_31(){
    int yazi = 0;
    int tura = 0;
    for(int i = 1; i <= 100; i++){
        int atis = flip();
        if(atis == 0){
            yazi++;
        }else if(atis == 1){
            tura++;
        }
    }

    printf("Yazi: %d, Tura: %d", yazi, tura);
}

void _5_32(){
    srand(time(NULL));
    int num = rand() % 1000;
    while(1){
        int tahmin;

        printf("Tahmin (bitirmek için -1): ");
        scanf("%d", &tahmin);

        if(tahmin == -1){
            printf("Oyun bitirildi. Sayi: %d\n", num);
            break;
        }

        if(tahmin == num){
            printf("Buldun!\n");
            break;
        }

        if(tahmin < num){
            printf("Daha buyuk!\n");
            continue;
        }

        if(tahmin > num){
            printf("Daha kucuk!\n");
            continue;
        }
    }
}

// 5.34
int power(int base, int exp){
    if(exp == 1){
        return base;
    }
    int p = base * power(base, exp-1);

    return p;
}

void _5_34(){
    printf("3^4 = %d", power(3, 4));
}

// 5.35
int fibonacci(int term){
    if(term < 2){
        return term;
    }

    int a = 0;
    int b = 1;
    for(int i = 2; i < term; i++){
        int t = b;
        b = b + a;
        a = t;
    }

    return a + b;
}

void _5_35(){
    printf("Fibonacci(9): %d", fibonacci(9));
}

int main(void){
    // _5_9();
    // _5_10();
    // _5_11();
    // _5_15();
    // _5_16();
    // _5_17();
    // _5_18();
    // _5_19();
    // _5_20();
    // _5_22();
    // _5_23();
    // _5_24();
    // _5_25();
    // _5_26();
    // _5_27();
    // _5_28();
    // _5_29();
    // _5_30();
    // _5_31();
    // _5_32();
    // _5_34();
    _5_35();
    return 0;
}