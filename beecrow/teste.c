#include <stdio.h>

// Função recursiva padrão para calcular Fibonacci
int fibonacci(int n) {
if (n == 0) return 0; // caso base 0: termo 0 da série é 0
if (n == 1) return 1; // caso base 1: termo 1 da série é 1
return fibonacci(n-1) + fibonacci(n-2); // retorna a soma dos 2 termos anteriores
}

int main() {
int n, i;
printf("Digite um número natural N: ");
scanf("%d", &n);

// Verifica se o número é maior que 0
if (n <= 0) {
printf("Número inválido. Deve ser um número natural maior que 0.\n");
return 1;
}

// Imprime os N primeiros termos da série de Fibonacci na ordem inversa
for (i = n; i >= 0; i--) {
printf("%d ", fibonacci(i));
}
printf("\n");
return 0;
}
