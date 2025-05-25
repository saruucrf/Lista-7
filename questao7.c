#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int)num;         
    *frac = num - *inteiro;      
}

int main() {
    float numero, parte_frac;
    int parte_int;
    
    printf("Digite um número real: ");
    scanf("%f", &numero);
    
    frac(numero, &parte_int, &parte_frac);
    
    printf("\nParte inteira: %d\n", parte_int);
    printf("Parte fracionária: %f\n", parte_frac);
    
    return 0;
}
