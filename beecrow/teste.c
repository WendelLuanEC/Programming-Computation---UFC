#include <stdio.h>

// Fun��o recursiva padr�o para calcular Fibonacci
int fibonacci(int n) {
if (n == 0) return 0; // caso base 0: termo 0 da s�rie � 0
if (n == 1) return 1; // caso base 1: termo 1 da s�rie � 1
return fibonacci(n-1) + fibonacci(n-2); // retorna a soma dos 2 termos anteriores
}

int main() {
int n, i;
printf("Digite um n�mero natural N: ");
scanf("%d", &n);

// Verifica se o n�mero � maior que 0
if (n <= 0) {
printf("N�mero inv�lido. Deve ser um n�mero natural maior que 0.\n");
return 1;
}

// Imprime os N primeiros termos da s�rie de Fibonacci na ordem inversa
for (i = n; i >= 0; i--) {
printf("%d ", fibonacci(i));
}
printf("\n");
return 0;
}
