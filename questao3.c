#include <stdio.h>

void trocarValores(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("A = %d\nB = %d\n", a, b);

    trocarValores(&a, &b);

    printf("\nDepois da troca:\n");
    printf("A = %d\nB = %d\n", a, b);
    
    return 0;
}
