#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void zeruj(char plansza_widoczna[10][10])
{
    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            plansza_widoczna[i][j]='0';
        }
    }
}

//Rysowanie planszy widocznej dla uzytkownika na ktorej sa zaznaczone jego trafienia i pud³a
void rysowanie(char typ, int plansza_widoczna[10][10])
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
            if(typ=='c')
            {
                printf("%c ", plansza_widoczna[i][j]);
            }
            else
            {
                if(typ=='d')
                {
                    printf("%d ", plansza_widoczna[i][j]);
                }
            }

        }

    }
    printf("\n\n");
}



int ruch_gracza(char plansza_widoczna[10][10], int plansza_ukryta[10][10], char plansza_ukryta2[10][10])
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
        plansza_ukryta2[b-1][c]=0;
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
    char plansza_widoczna2[10][10];
    char plansza_widoczna[10][10];   //A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J         A/B/C/D/E/F/G/H/I/J        A/B/C/D/E/F/G/H/I/J          A/B/C/D/E/F/G/H/I/J
    int plansza_ukryta[10][10]= {/*1*/{1,1,1,0,0,0,0,0,0,0}, /*2*/{0,0,0,0,1,1,1,1,1,0}, /*3*/{0,0,1,0,0,0,0,0,0,0}, /*4*/{0,0,1,0,1,1,1,0,0,0}, /*5*/{1,0,0,0,0,0,0,0,0,1}, /*6*/{1,0,1,1,1,1,0,0,0,0}, /*7*/{1,0,0,0,0,0,0,0,0,0}, /*8*/{1,0,1,0,0,0,1,1,0,1},/*9*/{0,0,1,0,0,0,0,0,0,1}, /*10*/{0,0,0,0,1,1,0,0,0,1}};
    int plansza_ukryta2[10][10]= {/*1*/{1,1,1,1,1,1,1,1,1,0}, /*2*/{1,1,1,1,1,0,0,0,0,0}, /*3*/{0,0,0,0,0,0,0,0,0,1}, /*4*/{0,0,0,0,1,1,1,0,0,1}, /*5*/{1,0,0,0,0,0,0,0,0,1}, /*6*/{1,0,1,1,1,1,0,0,0,0}, /*7*/{1,0,0,0,0,0,0,0,0,0}, /*8*/{1,0,1,0,0,0,1,1,0,1},/*9*/{0,0,1,0,0,0,0,0,0,1}, /*10*/{0,0,0,0,1,1,0,0,0,1}};
    char wybor, zmiana_gracza, wybor_trybu;
    int licznik=0;
    printf("Witaj w grze w statki!\nAby rozpoczac gre wprowadz 's', aby wyjsc wprowadz 'e'.\n");
    scanf("%c", &wybor);
    if(wybor=='e'||wybor=='E')
    {
        exit(0);
    }
    system("cls");
    printf("Wybierz tryb gry:\n\n-Traf wszystkie statki w jak najmniejszej ilosci ruchow - wybierz '1'\n-Gra 1 vs 1 - wybierz '2'\n-Gra vs PC - wybierz '3'\n");
    scanf(" %c", &wybor_trybu);
    switch(wybor_trybu)
    {

//Tryb gry 1

    case '1':
    {
        system("cls");
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

gra1:
        printf("Ilosc wykonanych ruchow: %d\n\n", licznik);
        rysowanie('c', plansza_widoczna);
        ruch_gracza(plansza_widoczna, plansza_ukryta, plansza_ukryta2);
        //Sprawdzanie czy przeciwnik ma jeszcze statki

        for(int i=0; i<=9; i++)
        {
            for(int j=0; j<=9; j++)
            {
                if(plansza_ukryta[i][j]==1)
                {
                    licznik++;
                    goto gra1;
                }

            }
        }
        printf("Wygrales\n");
        printf("Ilosc wykonanych przez ciebie ruchow to: %d", licznik);
        rysowanie('c', plansza_widoczna);
        break;

    }


//Tryb gry 2

    case '2':
    {
        zeruj(plansza_widoczna);
        zeruj(plansza_widoczna2);

gra2:
        system("cls");
        if(licznik%2==0)
        {
            printf("Gracz 1\nIlosc wykonanych ruchow: %d\n\n", licznik);
            printf("Plansza przeciwnika: \n");
            rysowanie('c',plansza_widoczna); //Pokazuje plansze przeciwnika zlozona z samych 0, gdy trafimy w dane '0' zamieni sie ono na 'X', gdy nie trafimy zamieni sie na '-'
            printf("Twoja plansza: \n");
            rysowanie('d',plansza_ukryta); //Pokazuje nasza plansze zlozona z samych 0 (puste pola) i 1 (nasze statki)
            ruch_gracza(plansza_widoczna, plansza_ukryta, plansza_ukryta2); //Zamienia znak planszy ktora widzimy z samych zer (plansza przeciwnika) na 'X' lub '-' w zaleznosci od tego czy na danych wspolrzednych jego planszy zanjduje sie 1(statek)
            system("cls");
            printf("Gracz 1\nIlosc wykonanych ruchow: %d\n\n", licznik);
            printf("Plansza przeciwnika: \n");
            rysowanie('c',plansza_widoczna);
            printf("Twoja plansza: \n");
            rysowanie('d',plansza_ukryta);
            printf("Wprowadz 2 aby przejsc do ruchu gracza 2");
            scanf(" %c", &zmiana_gracza);
        }
        if(licznik%2==1)
        {
            printf("Gracz 2\nIlosc wykonanych ruchow: %d\n\n", licznik);
            printf("Plansza przeciwnika: \n");
            rysowanie('c', plansza_widoczna2);
            printf("Twoja plansza: \n");
            rysowanie('d',plansza_ukryta);
            ruch_gracza(plansza_widoczna2, plansza_ukryta2, plansza_ukryta);
            system("cls");
            printf("Gracz 1\nIlosc wykonanych ruchow: %d\n\n", licznik);
            printf("Plansza przeciwnika: \n");
            rysowanie('c',plansza_widoczna2);
            printf("Twoja plansza: \n");
            rysowanie('d',plansza_ukryta);
            printf("Wprowadz 1 aby przejsc do ruchu gracza 1");
            scanf(" %c", &zmiana_gracza);
        }

        //Sprawdzanie czy przeciwnik ma jeszcze statki

        for(int i=0; i<=9; i++)
        {
            for(int j=0; j<=9; j++)
            {
                if(plansza_ukryta[i][j]==1)
                {
                    licznik++;
                    goto gra2;
                }

            }
        }
        printf("Wygrales\n");
        printf("Ilosc wykonanych przez ciebie ruchow to: %d", licznik);
        rysowanie('c', plansza_widoczna);
    }

    }
}
