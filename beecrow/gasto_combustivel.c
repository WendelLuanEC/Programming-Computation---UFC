#include <stdio.h>
 
int main() {
 
    int X, Y; //tempo de viagem e velocidade media
    double R;
    
    scanf("%d%d",&X,&Y);
    
    R=(X*Y)/12.0;
    printf("%.3lf\n",R);
    
    return 0;
}
