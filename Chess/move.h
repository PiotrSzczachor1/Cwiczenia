#include "convert_letter_to_number.h"
#include "convert_number_to_letter.h"

void move(int *licznik, char board[8][8], int hidden_board[8][8])
{
    int b,c;
    char a;
    char kolumna;
    if(*licznik%2==1)
    {
        printf("Ruch koloru bialego: \n");
        printf("Wybierz wspolrzedna figury ktora chcesz sie ruszyc np. A5: ");
        scanf(" %c %d", &a, &b);
        c=convert_letter_to_number(a);
        if(board[b-1][c]=='W') //Ruchy wiezy
        {
            int d=c;
            printf("Mozliwe ruchy: \n");
            while(hidden_board[b-1][c+1]!=2&&c<7) //Dopoki wieza idac w prawo nie wyjdzie poza plansze lub nie napotka figury swojego koloru wypisuj mozliwosci ruchu wiezy w prawo
            {
                kolumna=convert_number_to_letter(c);
                printf("%c%d ", kolumna+1, b);
                c++;
            }
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            while(hidden_board[b-1][c-1]!=2&&c>0)
            {
                kolumna=convert_number_to_letter(c);
                printf("%c%d ", kolumna-1, b);
                c--;
            }
            c=d; //Przywracamy wartosc wpisana przez uzytkownika do c
            while(hidden_board[b-1][c-1]!=2&&b<8)
            {
                kolumna=convert_number_to_letter(c)
                printf("%c%d") //Wroc do wypisywania pozycji w gore
            }

        }
    }
    else
    {
        printf("Ruch koloru czarnego: ");
    }
    *licznik=*licznik+1;
}
