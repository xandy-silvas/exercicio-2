#include <stdio.h>

// Função recursiva para calcular a soma dos primeiros n números naturais
int somaNaturais(int n) {
    // Caso base: se n é 0, a soma é 0
    if (n == 0) {
        return 0;
    } else {
        // Chamada recursiva: soma(n) = n + soma(n-1)
        return n + somaNaturais(n - 1);
    }
}

int main() {
    int num = 4; // Número de termos a serem somados
    int soma = somaNaturais(num); // Chama a função somaNaturais
    printf("A soma dos %d primeiros números naturais é %d\n", num, soma); // Imprime o resultado
    return 0;
}
