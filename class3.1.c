#include<stdio.h>

#define text "data enter"

int main(){
	
	printf("%s\n", text);
	
	int age = 0;
	float heigth = 0;
	char name[50] = "";
	
	printf("enter the age\n");
	scanf("%d", &age);
	
	printf("enter heigth\n");
	scanf("%f", &heigth);
	
	printf("enter your name\n");
	scanf("%s", &name);
	
	printf("\nData\n");
	printf("name: %s\n", name);
	printf("age: %d\n", age);
	printf("heigth: %.2f\n", heigth);
	
	system("pause");
}
