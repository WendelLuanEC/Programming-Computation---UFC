#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Input a text\n");
	gets(senha_usr);
	fflush(stdin);
	
	ok = strcmp(hardText, senha_usr);
	
	if(ok == 0){
		printf("texts equals");
	}
	else {
		printf("texts diferents");
	}
}
