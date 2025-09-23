#include <stdio.h>
int main(void)
{
 double x, result;

    printf("Entrez une valeur pour x : ");
    scanf("%lf", &x);
     result = 3 * x * x * x * x * x   
           + 2 * x * x * x * x       
           - 5 * x * x * x           
           - x * x                   
           + 7 * x                   
           - 6;                      

    printf("La valeur du polynôme est : %.2lf\n", result);
    


return 0;
} 
