#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int function(int a)
{
    a=a*2;
    printf("%d\n", a);
    return a;
}

int main()
{
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    function(a);
    printf("%d",a);
    return 0;
}
