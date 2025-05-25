#include <stdio.h>

int main() {
    
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';
    
    int *ptrInteiro;
    float *ptrReal;
    char *ptrChar;
    
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrChar = &caractere;
    
    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);
    printf("\n");
    
    *ptrInteiro = 20;
    *ptrReal = 6.28;
    *ptrChar = 'B';
    
    printf("Valores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);
    
    return 0;
}
