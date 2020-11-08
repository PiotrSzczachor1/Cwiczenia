#include <stdio.h>
#include <math.h>

double x, y;


int binarny(int a) //funkcja dziala analgicznie do funkcji szesnastkowy
{
    int wynik, tab[200]= {}, j=0;

    while(a>=1) // a to liczba, ktora po kazdym wykonaniu sie petli zmniejsza sie (jest dzielona przez 2) petla wykonuje sie dopoki liczba a jest wieksza lub rowna 1
    {
        wynik=a%2;
        a=a/2;
        tab[j]=wynik;
        j++;
    }

    printf("Twoja liczba w systemie dwojkowym to: ");

    for(j=j-1; j>=0; j--)
    {
        printf("%d", tab[j]);
    }

    printf("\n");
}




int osemkowy(int a) //funkcja dziala analgicznie do funkcji szesnastkowy
{
    int wynik, tab[200]= {}, j=0;

    while(a>=1) // a to liczba, ktora po kazdym wykonaniu sie petli zmniejsza sie (jest dzielona przez 8) petla wykonuje sie dopoki liczba a jest wieksza lub rowna 1
    {
        wynik=a%8;
        a=a/8;
        tab[j]=wynik;
        j++;
    }

    printf("Twoja liczba w osemkowym to: ");

    for(j=j-1; j>=0; j--)
    {
        printf("%d", tab[j]);
    }

    printf("\n");
}


int szesnastkowy(int a)
{

    int wynik, tab[200]= {}, j=0;

    while(a>=1) // a to liczba, ktora po kazdym wykonaniu sie petli zmniejsza sie (jest dzielona przez 16) petla wykonuje sie dopoki liczba a jest wieksza lub rowna 1
    {
        wynik=a%16; //Dzielimy modulo 16 i wartosc reszty to czesc tej liczby w systemie szesnastkowym, podczas pierwszego dzielenia wy³aniamy liczbê ostatni¹.
        a=a/16; //zmnijeszanie liczby a poprzez dzielenie jej przez 16

        if(wynik==10)   //dla kazdej wartosci reszty z dzielenia modulo przez 16 wiekszej lub rownej 10 przypisujemy jej znaki, kolejno 10=A 11=B 12=C 13=D 14=E 15=F
        {
            wynik='A';
        }

        if(wynik==11)
        {
            wynik='B';
        }

        if(wynik==12)
        {
            wynik='C';
        }

        if(wynik==13)
        {
            wynik='D';
        }

        if(wynik==14)
        {
            wynik='E';
        }

        if(wynik==15)
        {
            wynik='F';
        }

        tab[j]=wynik;
        j++; //zwiêkszamy j o 1 przy kazdym przejsciu przez petle, Poczatkowa wartosc j to 0 wiec po pierwszym przejsciu przez petle j przyjmie wartosc 1, przy drugim 2 itd... Wartosc ta jest rowna temu ile razy dzielimy liczbe a przez 16
    }

    printf("Twoja liczba w szesnastkowym to: ");

    for(j=j-1; j>=0; j--) //j to ilosc cyfr ktore otrzymalismy dzielac a przez 16 powiêkszona o 1 dlatego zapisujemy j=j-1, jest ona powiekszona o 1 i j-1 jest rowniez ostatnim znakkiem tablicy
    { //zmiejszamy j o 1 przy kazdym przejsciu przez petle dopoki nie osiagnie wartosci >=1, Robimy to po to aby wyswietlic wszystkie cyfry reszy z dzielenia od tylu np reszty z dzielenia to kolejno: tab[0]=1 tab[1]=2 tab[2]=3
        //wiec liczba w nowym systemie jest rowna 321, to znaczy ze musimy wyswietlic tablice od tylu czyli tab[2]=3 tab[1]=2 tab[0]=1
        if(tab[j]>9)
        {
            printf("%c", tab[j]); //Jezeli wartosc z tablicy jest liczba wieksza od 9 to wyswietlamy znak (A,B,C,D,E lub F) czyli zmienne char
        }
        else
        {
            printf("%d", tab[j]); //Jezeli wartosc z tablicy jest liczba mniejsza lub rowna 9 to wyswietlamy liczby (zmienne int)
        }
    }

    printf("\n");

}




int main()
{

    x = 5.2;
    y = 2.7 + 4 * pow(x, 2) + 2.3 * pow(x, 3);
    printf("Zmienna x: %5.1f  Wynik: %8.3f\n", x, y);
    int liczba, i=0;
    int tab[5]={};
    y=y*1000; //Pozbywamy sie przecinka z liczby

    for(int j=10000; j>=1; j=j/10)
    {
        liczba=(int)y/(10*j)%10; //Dzielimy najpierw (int)y/100 000  modulo 10 otrzymujemy pierwsza cyfre, nastepnie dzielimy (int)y/10 000  modulo 10 i otrzymujemy druga cyfre itd...
        tab[i]=liczba; //zapisujemy kolejno pierwsza cyfre do pierwszego miejsca w tablicy (tab[0]), nastepnie druga cyfre do drugiego miejsca w tablicy (tab[2]) itd...
        i++;
    }

    liczba=(int)y%10; //Dzielimy (int)y modulo 10 aby otrzymac ostatnia cyfre, nie moglismy tego zrobic wyzej bo zeby zniknelo nam dzielenie przez 10, j musialo by byc rowne 0 a nie mozna dzielic przez 0
    tab[i]=liczba; //Zapisujemy ostatnia cyfre do tablicy
    int a;
    printf("Podaj ktora cyfre z liczby bedacej wynikiem chcesz zamienic na system dwojkowy: ");
    scanf("%d", &a);
    binarny(tab[a-1]); //W tablicy wpisujemy wartosc podana przez uzytkownika pomniejszona o 1, bo tablice sa numerowane od 0
    osemkowy(tab[a-1]);
    szesnastkowy(tab[a-1]);



    return 0;
}
