#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tab[]={32, 73, 91, 22, 41};
    int i=0, min=tab[0];
    while(!tab[i]==NULL)
    {
        if(tab[i]<min)
        {
            min=tab[i];
        }

        i++;
    }
    printf("%d", min);
    return 0;
}
