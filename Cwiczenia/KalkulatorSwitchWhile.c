#include <stdio.h>
#include <stdlib.h>
//kalkulator switch
int main()
{
    float wynik, a, b;
    char znak;
    while(znak!=NULL)
    {
        printf("Podaj znak:\n'+' - dodwanie\n'-' - odejmowanie\n'*' - mnozenie\n'/' - dzielenie\n'e' - exit\n");
        scanf(" %c", &znak);
        if(znak=='e')
        {
            return 0;
        }
        printf("Podaj pierwsza liczbe: ");
        scanf("%f", &a);
        printf("Podaj druga liczbe: ");
        scanf("%f", &b);

        switch(znak)
        {
        case '+':
            wynik=a+b;
            printf("%f\n", wynik);
            break;
        case '-':
            wynik=a-b;
            printf("%f\n", wynik);
            break;
        case '*':
            wynik=a*b;
            printf("%f\n", wynik);
            break;
        case '/':
            wynik=a/b;
            printf("%f\n", wynik);
            break;
        }
    }
}
