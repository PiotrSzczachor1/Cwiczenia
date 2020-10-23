#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    //rozmiar bool'a
    printf("%d\n", sizeof(_Bool));
    //wyswietlanie limitow typow calkowitych
    printf("%d\n", INT_MAX);
    printf("%d\n", LONG_MAX);
    printf("%d\n", CHAR_MAX);
    return 0;
}
