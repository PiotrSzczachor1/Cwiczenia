#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char tekst1[100];
    printf("Podaj pierwszy tekst:\n");
    gets(tekst1);
    printf("Podaj drugi tekst:\n");
    char tekst2[100];
    gets(tekst2);
    while(tekst1[i]!=NULL&&tekst2[i]!=NULL)
    {
        if(tekst1[i]!=tekst2[i])
        {
            printf("Teksty nie sa takie same");
            return 0;
        }
        i++;


    }
    printf("Teksty sa takie same");
    return 0;
}
