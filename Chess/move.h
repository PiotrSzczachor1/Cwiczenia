#include "convert_letter_to_number.h"
#include "convert_number_to_letter.h"
#include "rook_possible_moves.h"
#include "knight_possible_moves.h"

void move(int *licznik, char board[8][8], int hidden_board[8][8])
{
    int b,c;
    char a;
    if(*licznik%2==1) //Sprawdzanie ktory gracz ma aktualnie ruch
    {
        printf("Ruch koloru bialego: \n");
        printf("Wybierz wspolrzedna figury ktora chcesz sie ruszyc np. A5: ");
        scanf(" %c %d", &a, &b);
        c=convert_letter_to_number(a);
        rook_possible_moves(hidden_board, board, b, c, 2, 1); //ukryta plansza cyfr, plansza widoczna, wiersz, kolumna, kolor(2 - white, 1- black), kolor przeciwnika(2 - white, 1 - black)
        knight_possible_moves(hidden_board, board, b, c, 2, 1);
    }
    else
    {
        printf("Ruch koloru czarnego: \n");
        printf("Wybierz wspolrzedna figury ktora chcesz sie ruszyc np. A5: ");
        scanf(" %c %d", &a, &b);
        c=convert_letter_to_number(a);
        rook_possible_moves(hidden_board, board, b, c, 1, 2); //ukryta plansza cyfr, plansza widoczna, wiersz, kolumna, kolor(2 - white, 1- black), kolor przeciwnika(2 - white, 1 - black)
        knight_possible_moves(hidden_board, board, b, c, 1, 2);
    }
    *licznik=*licznik+1;
}

