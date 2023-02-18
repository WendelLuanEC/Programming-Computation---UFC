#include<stdio.h>
#include<stdlib.h>

int main(){
	int a=1, b=2;
	while(a<16){
		a+=b;
		do{
			b+=a;
			a++;
		}while(b<9);
	}
	printf("a=%d, b=%d\n", a,b);
	system("pause");
}
