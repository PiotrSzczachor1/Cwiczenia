#include <stdio.h>
#include <stdlib.h>
//sprawdzanie dlugosci tekstu
int main()
{
    char tekst[100];
    printf("Podaj tekst: \n");
    gets(tekst);
    int i=0;
    while(tekst[i]!=NULL)
    {
        i++;
    }
    printf("%d", i);
    return 0;
}
