#include <iostream> //liczby  test v3

using namespace std;

void sito(bool *tab, unsigned int n)//funkcja ktora za pomoca petli wypisuje wszystkie liczby pierwsze do N.
{
    for (int i=2; i*i<=n; i++) //przeszukujemy przez wszytskie liczby pierwsze do N.
    {                           // i*i <= n   i+1
        if(!tab[i])             //jesli liczba jest pierwsza(ma wartosc 0)
        for (int j = i*i ; j<=n; j+=i) //tu wykreslamy wielokrotnosci dzielnikow 
            tab[j] = 1;         
    }
}

int main()// glowne dzialanie programu po ktorym program konczy prace 
{
    int n; // sa to zmienne wartosci 
    bool *tab;// to rowniez jest zmienna wartos 
    
    cout<<"Liczba do ktorej ma pokazac przedzial: ";// wprowadzamy dane z klawiatury w tablicy  
    cin>>n;// przyjmujemy wartosc podana w tablicy 
    
    tab = new bool [n+1];//stworzenie tablicy 
    
    for(int i=2; i<=n; i++) // zerowanie tablicy 
        tab[i] = 0;
    
    sito(tab, n); //przejrzenie liczb w podanym przedziale 
    
    cout<<"Liczby Pierwsze: ";// pokazane w tablicy wszystkich liczby pierwszych z podanego przedzialu 
    
    for(int i=2;i<=n;i++)
        if(!tab[i])
            cout<<i<<" ";//wyniki wyswietlane po koleii 
    
    delete []tab;

    return 0;
}
