#include <stdio.h>
#include<math.h>
 
int main() {
 
    double area, raio, n = 3.14159;
    
    scanf("%lf", &raio);
    
    area= n*pow(raio,2);
    
    printf("A=%.4f\n", area);
 
    return 0;
}
