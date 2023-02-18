#include<stdio.h>

int main(){
	int A, B, sum, subtr, mult, div;
	
	printf("Enter the first value\n");
	scanf("%d", &A);
	printf("Enter the second value\n");
	scanf("%d", &B);
	
	sum = A + B;
	subtr = A - B;
	mult = A * B;
	div = A / B;
	
	printf("\nResults:\n");
	printf("Sum: %d\n", sum);
	printf("Subtraction: %d\n", subtr);
	printf("Multiplication: %d\n", mult);
	printf("Division: %d\n", mult);
	
	system("pause");
}
