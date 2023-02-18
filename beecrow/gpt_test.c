#include <stdio.h>

int main() {
  int num1, num2, cont;

  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }

  printf("Valores impares no intervalo fechado entre %d e %d:\n", num1, num2);

  cont = num1;
  while (cont <= num2) {
    if (cont % 2 != 0) {
      printf("%d\n", cont);
    }
    cont++;
  }

  return 0;
}

