/*

Questão: Dado o tamanho da base e da altura de um
retângulo, calcular a sua área e o seu perímetro.

*/

#include<stdio.h>

int main() {
    int base = 4;
    int altura = 7;

    printf("A área do retângulo : %d\n", base * altura);
    printf("\nO perímetro do retângulo : %d", 2 * (base + altura));

    return 0;
}