#include <stdio.h>

int main() {

    int var1, var2;

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if (ptr1 > ptr2) {
        printf("Maior endereço: %p (var1)\n", (void*)ptr1);
    } else if (ptr2 > ptr1) {
        printf("Maior endereço: %p (var2)\n", (void*)ptr2);
    } else {
        printf("Os endereços são iguais (improvável em variáveis distintas)\n");
    }
    
    return 0;
}
