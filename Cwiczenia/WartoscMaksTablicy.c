#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tab[]={32, 73, 91, 22, 41};
    int i=0, maks=tab[0];
    while(!tab[i]==NULL)
    {
        if(tab[i]>maks)
        {
            maks=tab[i];
        }

        i++;
    }
    printf("%d", maks);
    return 0;
}
