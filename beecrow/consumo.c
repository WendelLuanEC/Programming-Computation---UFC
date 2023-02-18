#include <stdio.h>
 
int main() {
 
    int X; //distancia total
    double Y; //combustivel gasto
    
    scanf("%d%lf",&X,&Y);
    
    printf("%.3lf km/l\n",X/Y);
 
    return 0;
}
