#include <stdio.h>
int somaNaturais(int n) {

    if (n == 0) {
        return 0;
    } else {

        return n + somaNaturais(n - 1);
    }
}

int main() {
    int num = 4;
    int soma = somaNaturais(num);
    printf("A soma dos %d primeiros números naturais é %d\n", num, soma);
    return 0;
}
