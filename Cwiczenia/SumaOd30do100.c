#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=30, wynik=a+(a+1);
    a=32;
    while(a<=99)
    {
        wynik=wynik+a;
        a++;
    }
    printf("%d", wynik);

    return 0;
}
