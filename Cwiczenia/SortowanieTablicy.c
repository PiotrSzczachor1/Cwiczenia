#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char tab[100];
    scanf("%s", tab);
    while(tab[i]<tab[i+1])
    {
        i++;
    }
    if(!tab[i+1])
    {
        printf("Tablica jest posortowana");
    }
    else
    {
        printf("Tablica nie jest posortowana");
    }

    return 0;
}
