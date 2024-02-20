#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void _8_6(){
    char x[100];
    puts("metin giriniz: ");
    scanf("%100s", x);

    printf("\nbuyuk: ");
    char * xPtr = x;
    while(*xPtr != '\0'){
        printf("%c", toupper(*xPtr));
        xPtr++;
    }

    printf("\nkucuk: ");
    char * xPtr2 = x;
    while(*xPtr2 != '\0'){
        printf("%c", tolower(*xPtr2));
        xPtr2++;
    }
}

void _8_7(){
    int sum = 0;
    for(size_t i = 0; i < 4; i++){
        char arr[10];
        char * rem;
        printf("\ngiriniz: ");
        scanf("%10s", &arr);
        sum += strtol(arr, &rem, 0);
    }
    printf("toplam: %ld", sum);
}

int main(){
    // _8_6();
    _8_7();
}