#include <stdio.h>
#include <stdlib.h>

int main()

{
    char litera;
    scanf("%c", &litera);
    switch(litera)
    {
    case 'a':
    case'A':
            printf("A jak: A zasadzil ktos kiedys panu kopa?");
        break;
    case 'b':
    case'B':
            printf("B jak: Babka");
        break;
    case 'c':
    case'C':
            printf("C jak: Cycu moj kochany");
        break;
    case 'd':
    case'D':
            printf("D jak: Dawać renta");
        break;
    case 'e':
    case'E':
            printf("E jak: Erosoman");
        break;
    }
    return 0;
}
