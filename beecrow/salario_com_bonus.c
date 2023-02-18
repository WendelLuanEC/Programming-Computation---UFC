#include <stdio.h>
 
int main() {
 
    char nome[50];
    double salario_fixo,total_vendas;
    
    scanf("%s%lf%lf",&nome,&salario_fixo,&total_vendas);
    
    printf("TOTAL = R$ %.2lf\n",(salario_fixo+0.15*total_vendas));
 
    return 0;
}
