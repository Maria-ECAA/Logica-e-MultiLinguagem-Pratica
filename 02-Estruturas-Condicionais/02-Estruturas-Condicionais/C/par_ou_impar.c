// Objetivo: Verificar se um número é par ou ímpar (Implementação em C)

#include <stdio.h> 

int main() {
    int numero = 7; // Tipagem estática: 'int' deve ser declarado

    if (numero % 2 == 0) {
        printf("O número é Par.\n"); // Usa printf para saída
    } else {
        printf("O número é Ímpar.\n");
    }
    return 0; // Finaliza o programa
}

// Conceito: A lógica é idêntica ao JS e Java, mas exige a biblioteca <stdio.h> para usar printf.
