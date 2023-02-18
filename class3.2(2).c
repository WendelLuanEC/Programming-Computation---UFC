#include<stdio.h>

int main(){
	
	int data = 10;
	printf("value before increment: %d.\n", data);
	
	data++;
	printf("After increment: %d.\n", data);
	
	data--;
	printf("After decrement: %d.\n", data);
	
	data+=3;
	printf("After increment of 3 units. %d\n", data);
	
	data-=2;
	printf("After decrement of 2 units. %d\n", data);
	
	data*=10;
	printf("After multiplicate to 10. %d\n", data);
}
