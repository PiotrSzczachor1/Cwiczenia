#include <stdio.h>
#include <stdlib.h>


//Rysowanie planszy widocznej dla uzytkownika na ktorej sa zaznaczone jego trafienia i pudła
void rysowanie(char plansza_widoczna[10][10])
{
    for(char i='A'; i<='J'; i++)
    {
        if(i=='A')
        {
            printf("    ");
        }
        printf("%c ", i);
    }
    printf("\n");
    for(int i=0, j=1; i<=9; i++, j++)
    {
    if(j!=10)
    {
        printf("\n %d  ", j);
    }
    else
    {
        printf("\n%d  ", j);
    }
        for(int j=0; j<=9; j++)
        {

            printf("%c ", plansza_widoczna[i][j]);
        }

    }
    printf("\n\n");
}



int ruch_gracza(char plansza_widoczna[10][10], int plansza_ukryta[10][10])
{
    char a;
    int b, c;  //a to litera A-J (kolumna), b to liczba 1-10 (wiersz)
    printf("Podaj wspolrzedne w ktore chcesz uderzyc\nKolumna(A-J) Wiersz(1-10 np. 'A2'): ");
    scanf(" %c", &a);
    scanf(" %d", &b);

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
    if(a=='I'||a=='i')
    {
        c=8;
    }
    if(a=='J'||a=='j')
    {
        c=9;
    }


    if(plansza_ukryta[b-1][c]==1)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        plansza_widoczna[b-1][c]='X';
        plansza_ukryta[b-1][c]=0;
        printf("Trafiony!\n");
    }
    else
    {
        if(plansza_ukryta[b-1][c]==0)
        {
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            plansza_widoczna[b-1][c]='-';
            printf("Pudlo!\n\n");
        }
    }
    printf("\n\n");
}


int main()
{
    //Deklaracja tablicy widocznej dla gracza i tablicy ukrytej w ktorej sa zapisane wspolrzedne statkow
    char plansza_widoczna[10][10];   //A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J        A/B/C/D/E/F/G/H/I/J          A/B/C/D/E/F/G/H/I/J
    int plansza_ukryta[10][10]= {/*1*/{1,1,1,0,0,0,0,0,0,0}, /*2*/{0,0,0,0,1,1,1,1,1,0}, /*3*/{0,0,1,0,0,0,0,0,0,0}, /*4*/{0,0,1,0,1,1,1,0,0,0}, /*5*/{1,0,0,0,0,0,0,0,0,1}, /*6*/{1,0,1,1,1,1,0,0,0,0}, /*7*/{1,0,0,0,0,0,0,0,0,0}, /*8*/{1,0,1,0,0,0,1,1,0,1},/*9*/{0,0,1,0,0,0,0,0,0,1}, /*10*/{0,0,0,0,1,1,0,0,0,1}};
    char wybor;
    int licznik=0;
    printf("Witaj w grze w statki!\nAby rozpoczac gre wprowadz 's', aby wyjsc wprowadz 'e'.\n");
    scanf("%c", &wybor);
    if(wybor=='e'||wybor=='e')
    {
        exit(0);
    }
    printf("Gra polega na trafieniu wszystkich statkow w jak najmniejszej liczbie ruchow.\n");
    printf("Minimalna ilosc ruchow jakie nalezy wykonac aby zatopic wszystki statki to 31.\n");
    printf("W grze do zatopienia jest nastepujaca ilosc statkow o danych rozmiarach: \n");
    printf("1 statek dlugosci 5 pol\n2 statki dlugosci 4 pol\n3 statki dlugosci 3 pol\n4 statki dlugosci 2 pol\n1 statek dlugosci 1 pole\n\n");
    //wypelnianie tablicy zerami
    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            plansza_widoczna[i][j]='0';
        }
    }

    gra:
        printf("Ilosc wykonanych ruchow: %d\n\n", licznik);
        rysowanie(plansza_widoczna);
        ruch_gracza(plansza_widoczna, plansza_ukryta);
    //Sprawdzanie czy przeciwnik ma jeszcze statki

    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            if(plansza_ukryta[i][j]==1)
            {
                licznik++;
                goto gra;
            }

        }
    }
    printf("Wygrales\n");
    printf("Ilosc wykonanych przez ciebie ruchow to: %d", licznik);
    rysowanie(plansza_widoczna);




}
