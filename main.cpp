#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

int cwiczenie_nr2_1();
int cwiczenie_nr2_2();
int cwiczenie_nr2_3();
int cwiczenie_nr3_1();
int cwiczenie_nr3_2();
int cwiczenie_nr3_3();
int cwiczenie_nr4_1();
int cwiczenie_nr4_2();
int cwiczenie_nr4_3();
int cwiczenie_nr4_4();
int cwiczenie_nr4_5();
bool Prime(unsigned int nNumber);

int main()
{
    cout << "Cwiczenia z ksiazki od zera do gier kodera:" << endl;
    cout << "==========================================" << endl;
    cout << "1. Cwiczenie 2.1. - Oczekiwanie na klawisz po wypisaniu w konsoli linijki tekstu" << endl;
    cout << "2. Cwiczenie 2.2. - Program wyswietlajacy imie i nazwisko po ich wpisaniu do konsoli" << endl;
    cout << "3. Cwiczenie 2.3. - Iloczyn trzech liczb" << endl;
    cout << "4. Cwiczenie 3.1. - Klasyfikacja wpisanej liczby" << endl;
    cout << "5. Cwiczenie 3.2. - Liczby od 1 do 100 i ich drugie potegi" << endl;
    cout << "6. Cwiczenie 3.3. - Gra w odgadniecie wylosowanej liczby" << endl;
    cout << "7. Cwiczenie 4.1. - Rozrzut zmiennych int i unsigned int" << endl;
    cout << "8. Cwiczenie 4.2. - Sizeof dla nowych nazw typu short int i long int" << endl;
    cout << "9. Cwiczenie 4.3. - Tabela znakow ANSI wraz z zatrzymaniem po zapelnieniu konsoli" << endl;
    cout << "10. Cwiczenie 4.4. - Rozwiazywanie rownan kwadratowych" << endl;
    cout << "11. Cwiczenie 4.5. - Sprawdzanie czy wpisana liczba jest liczba pierwsza" << endl;
    cout << "0. Wyjdz" << endl;
    int choise;
    while (true)
    {
        cout << "Twoj wybor: ";
        cin >> choise;
        switch(choise)
        {
            case 1: cwiczenie_nr2_1(); break;
            case 2: cwiczenie_nr2_2(); break;
            case 3: cwiczenie_nr2_3(); break;
            case 4: cwiczenie_nr3_1(); break;
            case 5: cwiczenie_nr3_2(); break;
            case 6: cwiczenie_nr3_3(); break;
            case 7: cwiczenie_nr4_1(); break;
            case 8: cwiczenie_nr4_2(); break;
            case 9: cwiczenie_nr4_3(); break;
            case 10: cwiczenie_nr4_4(); break;
            case 11: cwiczenie_nr4_5(); break;
            case 0: return 0; break;
            default: cout << "Niepoprawna opcja" << endl; break;
        }
    }
    return 0;
}

int cwiczenie_nr2_1()
{
    cout << "Trzy linijki tekstu:" << endl;
    cout << "Pierwsza linijka tekstu" << endl;
    getch();
    cout << "Druga linijka tekstu" << endl;
    getch();
    cout << "Trzecia linijka tekstu" << endl;
    getch();
    return 0;
}
int cwiczenie_nr2_2()
{
    string imie, nazwisko;
    cout << "Aplikacja podajaca w pe³nym zdaniu imie i nazwisko uzytkownika" << endl;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    cout << "Nazywasz sie " << imie << " " << nazwisko << "." << endl;
    return 0;
}
int cwiczenie_nr2_3()
{
    int a, b, c;
    cout << "Aplikacja obliczajaca iloczyn trzech liczb" << endl;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj trzecia liczbe: ";
    cin >> c;
    cout << a << " * " << b << " * " << c << " = " << a*b*c << endl;
    return 0;
}
int cwiczenie_nr3_1()
{
    int number;
    cout << "Klasyfikacja liczby" << endl;
    cout << "Podaj liczbe, a ja zaklasyfikuje ja do liczb ujemnych, dodatnich jednocyfrowych, dwucyfrowych lub pozostalych: " << endl;
    cin >> number;
    if (number < 0)
    {
        cout << "Liczba " << number << " jest liczba ujemna." << endl;
    } else if (number >= 0 && number < 10)
    {
        cout << "Liczba " << number << " jest dodatnia liczba jednocyfrowa." << endl;
    } else if (number >= 10 && number < 100)
    {
        cout << "Liczba " << number << " jest dodatnia liczba dwucyfrowa." << endl;
    } else
    {
        cout << "Liczba " << number << " nalezy do kategorii pozostalych liczb." << endl;
    }
    return 0;
}
int cwiczenie_nr3_2()
{
    cout << "Liczby od 1 do 100 oraz ich kwadrtaty" << endl;
    for (int i = 1; i <= 100; i +=2)
    {
        cout << i << " --- " << i*i << " || " << i+1 << " --- " << (i+1)*(i+1) << endl;
    }
    return 0;
}
int cwiczenie_nr3_3()
{
    cout << "Gra w odgadniecie wylosowanej liczby" << endl;
    int random, guess = 0, guess_count = 1;
    srand (time(NULL));
    random = rand() % 100 + 1;
    cout << "Wylosowalem pewna liczbe, sprobuj ja odgadnac: " << endl;
    while (true)
    {
        cin >> guess;
        if (guess == random)
        {
            cout << "Gratulacje! Odgadles liczbe" << endl;
            cout << "To byla twoja " << guess_count << " proba." << endl;
            return 0;
        } else if (guess < random)
        {
            cout << "Wylosowana liczba jest wieksza" << endl;
            cout << "To byla twoja " << guess_count << " proba." << endl;
            cout << "Sprobuj jeszcze raz: ";
            guess_count++;
        } else if (guess > random)
        {
            cout << "Wylosowana liczba jest mniejsza" << endl;
            cout << "To byla twoja " << guess_count << " proba." << endl;
            cout << "Sprobuj jeszcze raz: ";
            guess_count++;
        }
    }
    return 0;
}
int cwiczenie_nr4_1()
{
    cout << "Przypisanie wartosci 3 000 000 000 do zmiennej typu int i unsigned int" << endl;
    int nZmienna = 3000000000;
    unsigned int uZmienna = 3000000000;
    cout << "Wartosc zmiennej typu int: " << nZmienna << endl;
    cout << "Wartosc zmiennej typu unsigned int: " << uZmienna << endl;
    return 0;
}
int cwiczenie_nr4_2()
{
    cout << "Sizeof dla nowych nazw typu short int i long int" << endl;
    typedef short int krotki;
    typedef long int dlugi;
    cout << "Typ short int nazwany krotki: " << sizeof(krotki) << endl;
    cout << "Typ long int nazwany dlugi: " << sizeof(dlugi) << endl;
    return 0;
}
int cwiczenie_nr4_3()
{
    cout << "Wypisanie w konsoli znakow ANSI wraz z ich indeksami" << endl;
    for (int i = 32; i <= 256; i++)
    {
        if ((i-32)/29 > 0 && (i-32)%29 == 0)
        {
            getch();
        }
        cout << i << ". " << static_cast<char>(i) << endl;
    }
    return 0;
}
int cwiczenie_nr4_4()
{
    double a, b, c, delta;
    cout << "Rozwiazywanie rownan kwadratowych (tylko wynik rzeczywisty)";
    cout << "Rownanie ma postac ax^2 + bx + c = 0" << endl;
    cout << "Wpisz wspolczynnik a: ";
    cin >> a;
    cout << "Wpisz wspolczynnik b: ";
    cin >> b;
    cout << "Wpisz wspolczynnik c: ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Jest to linia prosta y = 0, dla ktorej rownanie ma nieskonczenie wiele rozwiazan." << endl;
            } else
            {
                cout << "Rownanie nie ma rozwiazan." << endl;
            }
        } else
        {
            cout << "Jest to rownanie liniowe z miejscem zerowym w punkcie x = " << -c/b << endl;
        }
    } else
    {
        delta = (b*b)-(4 * a * c);
        if (delta < 0)
        {
            cout << "Rownanie nie ma rozwiazan rzeczywistych." << endl;
        } else if (delta == 0)
        {
            cout << "Rownanie ma jedno rozwiazanie rzeczywiste w punkcie x = " << (-b)/(2 * a) << endl;
        } else
        {
            cout << "Rownanie ma nastepujace rownania:" << endl;
            cout << "x1 = " << (-b - sqrt(delta))/(2 * a) << endl;
            cout << "x2 = " << (-b + sqrt(delta))/(2 * a) << endl;
        }
    }
    return 0;
}
bool Prime(unsigned int nNumber)
{
    if (nNumber == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(nNumber); i++)
    {
        if (nNumber % i == 0)
        {
            return false;
        }
    }
    return true;
}
int cwiczenie_nr4_5()
{
    unsigned int nNumber;
    cout << "Sprawdzanie czy wpisana liczba jest liczba pierwsza" << endl;
    cout << "Wpisz pewna liczbe, a ja sprawdze czy jest liczba pierwsza: ";
    cin >> nNumber;
    cout << (Prime(nNumber) ? "Liczba jest liczba pierwsza." : "Liczba nie jest liczba pierwsza.") << endl;
    return 0;
}
