void knight_possible_moves(int hidden_board[8][8], char board[8][8], int b, int c, int color, int enemy_color)
{
    if(board[b-1][c]=='S') //Ruchy skoczka (konia)
        {
            char kolumna; //c - kolumna, b - wiersz
            int d=c, e=b;
            printf("Mozliwe ruchy: \n");
            printf("W prawo: \n");
            kolumna=convert_number_to_letter(c);

            if( ( (b-3)>=0 )&&( (c+1)<8 )&&( hidden_board[b+1][c+1]!=color ) ) //2 w gore jeden w prawo
            {
                if(hidden_board[b-3][c+1]==enemy_color) //2 w gore jeden w prawo
                {
                    printf("Mozliwe bicie: %c%d\n", kolumna+1, b-2); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d\n",kolumna+1, b-2);
                }
            }
            if( ( (b-2)>=0 )&&( (c+2)<8 )&&( hidden_board[b+1][c+1]!=color ) ) //1 w gore 2 w prawo
            {
                if(hidden_board[b-2][c+2]==enemy_color) //1 w gore 2 w prawo
                {
                    printf("Mozliwe bicie: %c%d\n", kolumna+2, b-1); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d\n",kolumna+1, b-2);
                }
            }
            if( ( (b)<7 )&&( (c+1)<8 )&&( hidden_board[b+1][c+1]!=color ) ) //1 w dol 2 w prawo
            {
                if(hidden_board[b][c+2]==enemy_color) // 1 w dol 2 w prawo
                {
                    printf("Mozliwe bicie: %c%d\n", kolumna+2, b); //Jezeli na tym polu jest pionek przeciwnika daj informacje o biciu
                }
                else
                {
                    printf("%c%d\n",kolumna+2, b);
                }
            }
        }

}

