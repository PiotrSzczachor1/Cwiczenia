#include <stdio.h>
#include <stdlib.h>

int main()
{
    char odp[5];
    do
    {
        printf("Czy chcesz byc debilem? (tak/nie)\n");
        scanf("%s", odp);
    }
    while(odp[0]=='n'&&odp[1]=='i'&&odp[2]=='e');
    if(odp[0]=='t'&&odp[1]=='a'&&odp[2]=='k')
    {
        printf("Jestes debilem");
    }
    return 0;
}
