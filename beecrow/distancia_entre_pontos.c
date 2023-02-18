#include <stdio.h>
#include<math.h>
int main() {
 
    double x1,y1,x2,y2,distancia;
    double X,Y;
    
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    
    X = x2-x1;
    X = pow(X,2);
    
    Y = y2-y1;
    Y = pow(Y,2);
    
    distancia= pow(X+Y,1.0/2.0);
    
    printf("%.4lf\n",distancia);
 
    return 0;
}
