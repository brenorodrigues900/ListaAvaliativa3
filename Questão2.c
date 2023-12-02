#include <stdio.h>

int main()
{
    int meses;
    double aporte_mensal, taxa_juros;

   
    scanf("%d", &meses);

    
    scanf("%lf", &aporte_mensal);

   
    scanf("%lf", &taxa_juros);

   
    double montante = 0.0;
    for (int mes = 1; mes <= meses; mes++)
    {
        montante += aporte_mensal;
        montante *= (1 + taxa_juros);
        printf("Montante ao fim do mes %d: R$ %.2f\n", mes, montante);
    }
    return 0;
}
