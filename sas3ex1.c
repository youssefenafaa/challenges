#include <stdio.h>
#include <stdbool.h>
int main(void){
    bool digit_seen[10]={false};
    bool repit[10]={false};
    int digit ;
    long n;

    printf("entrez un nombre :");
    scanf("%ld,&n");
    while (n>0){
        digit=n % 10;
        if (digit_seen[digit])
            repit[digit]=true;
        digit_seen[digit]=true;
        n /=10;
    }
    bool repetition_trouvee = false;
    for (int i = 0; i < 10; i++) {
        if (repit[i]) {
            repetition_trouvee = true;
            break;
        }
    } 
    if ( repetition_trouvee)
    
         printf("des chiffres sont repetes %d\n ", digit);
           
    else
        printf("aucun chiffres sont repete \n");
    return 0;

    }


