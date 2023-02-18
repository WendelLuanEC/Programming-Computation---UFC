#include <stdio.h>
 
int main() {
 
    int codigo1, quantidade1,codigo2,quantidade2;
    float valor1, valor2;
    
    scanf("%d%d%f", &codigo1,&quantidade1,&valor1);
    scanf("%d%d%f", &codigo2,&quantidade2,&valor2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (quantidade1*valor1+quantidade2*valor2));
 
    return 0;
}
