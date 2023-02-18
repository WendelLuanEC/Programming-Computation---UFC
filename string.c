#include<stdio.h>

int main(){
	
	char s[4];
	//scanf("%s", &s);
	//fflush(stdin);
	
	//gets(s);
	//fflush(stdin);
	
	fgets(s, 3, stdin);
	fflush(stdin);
	
	
	printf("%s", s);
	puts(s);
	
}
