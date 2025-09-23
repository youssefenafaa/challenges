#include <stdio.h>
int main(void)
{

    const float PI = 3.14;
    float r;
    float volume;
     printf("Enetr the rayon ---> ");
     scanf("%f,&r");
    
     volume=(4.0f/3.0f)*PI*r*r*r;

    printf("volume de sphere est :%f \n",volume);


return 0;
} 
