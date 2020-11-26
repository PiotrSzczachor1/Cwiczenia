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
        if(a=='A'||a=='a')
        {
            c=0;
        }
        if(a=='B'||a=='b')
        {
            c=1;
        }
        if(a=='C'||a=='c')
        {
            c=2;
        }
        if(a=='D'||a=='d')
        {
            c=3;
        }
        if(a=='E'||a=='e')
        {
            c=4;
        }
        if(a=='F'||a=='f')
        {
            c=5;
        }
        if(a=='G'||a=='g')
        {
            c=6;
        }
        if(a=='H'||a=='h')
        {
            c=7;
        }
        if(board[b-1][c]=='W') //Ruchy wiezy
        {
            int d=c;
            printf("Mozliwe ruchy: \n");
            while(hidden_board[b-1][c+1]!=2&&c<8)
            {
                if(c==0)
                {
                    kolumna='A';
                }
                if(c==1)
                {
                    kolumna='B';
                }
                if(c==2)
                {
                    kolumna='C';
                }
                if(c==3)
                {
                    kolumna='D';
                }
                if(c==4)
                {
                    kolumna='E';
                }
                if(c==5)
                {
                    kolumna='F';
                }
                if(c==6)
                {
                    kolumna='G';
                }
                if(c==7)
                {
                    kolumna='H';
                }
                printf("%c%d ", kolumna+1, b);
                c++;
            }
            c=d;
            while((hidden_board[b-1][c-1]!=2||hidden_board[b-1][c-1]!=1)&&c>0)
            {
                printf("%d%d ", c, b);
                c--;
            }

        }
    }
    else
    {
        printf("Ruch koloru czarnego: ");
    }
    *licznik=*licznik+1;
}
