#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d",&a, &b);
    printf("%.9lf", (double)a / b);
    // printf("%.9lf", a / (double)b); 이 경우는 오답!!

    return 0;
}