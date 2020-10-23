#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, tab[100]="342550";
    int i=0;
    scanf("%c", &a);
    while(!tab[i]==NULL)
    {
        if(tab[i]==a)
        {
            printf("Podany znak znajduje sie w tablicy\n");
            return 0;
        }

        i++;

    }
    printf("Podany znak nie znajduje sie tablicy");
    return 0;

}
