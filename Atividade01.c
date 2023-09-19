/*

Questão: Faça um algoritmo que leia os valores de A, B, C
e em seguida  imprima na tela a soma entre A e B é mostre
se a soma é menor que C.

não conseguir usar o scanf :/

*/

#include <stdio.h>

int main() {
    int a = 15;
    int b = 20;
    int c = 100;

    int resultado = a + b;

    printf("\nValor de A: %d\n", a);
    printf("Valor de B: %d\n", b);
    printf("Valor de C: %d\n", c);
    printf("\nResultado: %d\n", resultado);
    printf("\nA + B é menor que C? %s\n", resultado < c ? "Sim" : "Não");

    return 0;
}





