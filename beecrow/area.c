#include <stdio.h>
#include <math.h>
#define pi 3.14159
 
int main() {
 
    double A,B,C;
    
    scanf("%lf%lf%lf",&A,&B,&C);
    
    printf("TRIANGULO: %.3lf\n",A*C/2);
    printf("CIRCULO: %.3lf\n",pi*pow(C,2));
    printf("TRAPEZIO: %.3lf\n",(A+B)*C/2);
    printf("QUADRADO: %.3lf\n",pow(B,2));
    printf("RETANGULO: %.3lf\n",A*B);
 
    return 0;
}
