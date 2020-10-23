#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("Podaj liczbe calkowita a program powie ci czy jest to liczba pierwsza:\n");
    scanf("%d", &liczba);
    for(int i=2; i<liczba; i++)
    {

        if(liczba%i==0)
        {
            printf("liczba %d nie jest liczba pierwsza", liczba);
            return 0;
        }


    }
    printf("Liczba %d jest liczba pierwsza", liczba);
    return 0;
}
