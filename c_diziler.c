#include <stdio.h>

void _6_11(){
    int toSort[] = {5, 3, 7, 8, 1};
    int size = sizeof(toSort) / sizeof(int);

    for(int i = 0; i < size; i++){
        printf("%d ", toSort[i]);
    }
    printf("\n");

    for(int i = 1; i < size; i++){
        printf("karsilastirma sayisi: %d\n", size - i);
        for(int k = 0; k < size - i; k++){
            if(toSort[k+1] < toSort[k]){
                int temp = toSort[k+1];
                toSort[k+1] = toSort[k];
                toSort[k] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ", toSort[i]);
    }
}

void _6_15(){
    int numArr[20] = { 0 };
    for(int i = 0; i < 20; i++){
        int num;
        printf("Sayi %d giriniz: ", i);
        scanf("%d", &num);

        for(int k = 0; k < i; k++){ // binary search ile de yapilabilir, soruda belirtilmedigi icin linear search kullandim
            if(numArr[k] == num){
                printf("%d oncekilerden farkli degildir.\n", num);
                break;
            }

            if(k == i - 1){
                printf("%d oncekilerden farklidir.\n", num);
                break;
            }
        }

        numArr[i] = num;
    }
}

void _6_21(){
    int seats[10] = { 0 };
    int takenFirstClass = 0;
    int takenEconomy = 0;

    while(takenFirstClass + takenEconomy != 10){
        int choice;
        printf("[1] Birinci Sinif\n[2] Ekonomik\nSeciniz: ");
        scanf("%d", &choice);

        int k = 0;
        while(k == 0){
            switch(choice){
                case 1:
                    if(takenFirstClass != 5){
                        for(int i = 0; i < 5; i++){
                            if(seats[i] != 1){
                                printf("Birinci siniftan koltuk %d verilmistir.\n", i + 1);
                                seats[i] = 1;
                                takenFirstClass += 1;
                                k = 1;
                                break;
                            }
                        }
                    }else{
                        char decision;
                        printf("Birinci sinif koltuk kalmadi. Ekonomik ister misiniz? (y/n): \n");
                        scanf(" %c", &decision);
                        if(decision == 'y'){
                            k = 0;
                            choice = 2;
                        }else{
                            k = 1;
                            choice = 1;
                        }
                    }
                    break;
                case 2:
                    if(takenEconomy != 5){
                        for(int i = 5; i < 10; i++){
                            if(seats[i] != 1){
                                printf("Ekonomiden koltuk %d verilmistir.\n", i + 1);
                                seats[i] = 1;
                                takenEconomy += 1;
                                k = 1;
                                break;
                            }
                        }
                    }else{
                        char decision;
                        printf("Ekonomik koltuk kalmadi. Birinci sinif ister misiniz? (y/n): \n");
                        scanf(" %c", &decision);
                        if(decision == 'y'){
                            k = 0;
                            choice = 1;
                        }else{
                            k = 1;
                            choice = 2;
                        }
                    }
                    break;
                default:
                    printf("Yanlis secim!\n");
                    break;
            }
        }
        
    }

    printf("Bir sonraki ucak 3 saat sonra kalkacak.\n");

}

// 6.22-6.29 farkli dosyalarda yapilsa daha iyi olur.

void _6_30(){
    int arr[1000];
    for(int i = 0; i < 1000; i++){
        arr[i] = 1;
    }

    for(int i = 2; i < 1000; i++){
        for(int k = i + 1; k < 1000; k++){
                if(k % i == 0){
                    arr[k] = 0;
                }
        }
    }

    for(int j = 2; j < 1000; j++){
        if(arr[j] == 1){
            printf("\n%d asal sayidir!", j);
        }
    }
}

// 6.31
int testPalindrom(char text[], int length){
    for(int i = 0; i < length / 2; i++){
        if(text[i] != text[length - 1 - i]){
            return 0;
        }
    }

    return 1;
}

void _6_31(){
    char metin[5] = "asdsa";
    char metin2[6] = "asdfge";

    printf(testPalindrom(metin, 5) ? "\nPalindrom" : "\nPalindrom degil.");
    printf(testPalindrom(metin2, 6) ? "\nPalindrom" : "\nPalindrom degil.");
}


// 6.35 - 6.36 gibi

void diziYazdir(char d[], int size){
    if(size == 0){
        return;
    }

    printf("%c ", d[size - 1]);
    size -= 1;
    diziYazdir(d, size);
}

void _6_35(){
    char d[3] = {'a', 'b', 'c'};
    diziYazdir(d, 3);
}

// 6.37

int yinelemeliMinimum(int arr[], int size){
    if(size == 1){
        return arr[0];
    }

    if(arr[size - 1] < arr[size - 2]){
        arr[size - 2] = arr[size - 1];
    }

    size -= 1;
    yinelemeliMinimum(arr, size);
}

void _6_37(){
    int arr[5] = {7, 3, 12, 2, 8};
    printf("Minimum: %d", yinelemeliMinimum(arr, 5));
}


int main(){

    // _6_11();
    // _6_15();
    // _6_21();
    // _6_30();
    // _6_31();
    // _6_35();
    // _6_37();

}