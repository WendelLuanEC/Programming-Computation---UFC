#include<stdio.h>

int main(){
	int vetor[]= {1867, 1947, 2007};
	int ano = 0;
	ano++;
	printf("value: %d\n", vetor[ano]);
	++ano;
	printf("value: %d\n", ++vetor[ano--]);
	
	system("pause");
}
