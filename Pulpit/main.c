#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik;
    for(licznik=0; licznik<=20; licznik++)
    {

        if(licznik%2==1)
        {
        continue;
        }
        else
        {
            printf("%d\n", licznik);
        }
    }
    return 0;
}
