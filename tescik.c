#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[100]="3429753";
    int min;
    int i=0;
    while(!tab[i]==NULL)
    {
        if(tab[i]<min)
        {
            min=tab[i];
            printf("%d", min);
        }
        i++;
    }
    printf("%d", min);

    return 0;
}
