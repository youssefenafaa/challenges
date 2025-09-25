#include <stdio.h>
#include <stdlib.h>

int main(){
  
    char T [6];
    int i;
    T[0]='A';
    T[1]='E';
    T[3]='I';
    T[4]='O';
    T[5]='U';
    T[6]='Y';
    printf("les vouyelles de lalphabet francais:\n");

    for ( i = 0; i < 6; i++)
    {
        printf("%c\n",T[i]);
    }


    return 0;
    



}