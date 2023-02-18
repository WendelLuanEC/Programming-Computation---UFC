#include <stdio.h>
 
int main() {
 
    int num_func, hrs_trab;
    float valor_p_hora;
    
    scanf("%d%d%f",&num_func,&hrs_trab,&valor_p_hora);
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num_func, hrs_trab * valor_p_hora);
 
    return 0;
}
