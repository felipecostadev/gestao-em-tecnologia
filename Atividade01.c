#include<stdio.h>
#include<stdbool.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 50;

    int resultado = a + b;

    printf("Valor de A: %d", a);
    printf("\nValor de B: %d", b);
    printf("\nValor de C: %d", c);
    printf("\nResultado: %d", resultado);
    printf("\nA + B é menor que C? %s", resultado < c ? "Sim" : "Não");

    return 0;
}