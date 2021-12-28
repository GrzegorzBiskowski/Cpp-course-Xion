#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

int exercise_no2_1();
int exercise_no2_2();
int exercise_no2_3();
int exercise_no3_1();
int exercise_no3_2();
int exercise_no3_3();
int exercise_no4_1();
int exercise_no4_2();
int exercise_no4_3();
int exercise_no4_4();
int exercise_no4_5();
bool Prime(unsigned int nNumber);

int main()
{
    cout << "Exercises for course by Karol Kuczmarski (Xion):" << endl;
    cout << "==========================================" << endl;
    cout << "1. Exercise 2.1. - Waiting for a character after writing a line of text" << endl;
    cout << "2. Exercise 2.2. - Writing first name and last name in a full sentence" << endl;
    cout << "3. Exercise 2.3. - Multiplying three number" << endl;
    cout << "4. Exercise 3.1. - Classifying given number" << endl;
    cout << "5. Exercise 3.2. - Numbers from 1 to 100 and their squares" << endl;
    cout << "6. Exercise 3.3. - Guess the number game" << endl;
    cout << "7. Exercise 4.1. - Span of int and unsigned int" << endl;
    cout << "8. Exercise 4.2. - Sizeof for new names of short int and long int" << endl;
    cout << "9. Exercise 4.3. - ANSI list with break after the console is full" << endl;
    cout << "10. Exercise 4.4. - Solving quadratic equations" << endl;
    cout << "11. Exercise 4.5. - Checking if a given number is prime" << endl;
    cout << "0. Exit the program" << endl;
    int choise;
    while (true)
    {
        cout << "Your choise: ";
        cin >> choise;
        switch(choise)
        {
            case 1: exercise_no2_1(); break;
            case 2: exercise_no2_2(); break;
            case 3: exercise_no2_3(); break;
            case 4: exercise_no3_1(); break;
            case 5: exercise_no3_2(); break;
            case 6: exercise_no3_3(); break;
            case 7: exercise_no4_1(); break;
            case 8: exercise_no4_2(); break;
            case 9: exercise_no4_3(); break;
            case 10: exercise_no4_4(); break;
            case 11: exercise_no4_5(); break;
            case 0: return 0; break;
            default: cout << "Wrong input" << endl; break;
        }
    }
    return 0;
}

int exercise_no2_1()
{
    cout << "Three lines of text:" << endl;
    cout << "First line" << endl;
    getch();
    cout << "Second line" << endl;
    getch();
    cout << "Third line" << endl;
    getch();
    return 0;
}
int exercise_no2_2()
{
    string strName, strLastname;
    cout << "Program writing first name and last name in a full sentence" << endl;
    cout << "Your name: ";
    cin >> strName;
    cout << "Your last name: ";
    cin >> strName;
    cout << "Your name is " << strName << " " << strLastname << "." << endl;
    return 0;
}
int exercise_no2_3()
{
    double dA, dB, dC;
    cout << "Program that calculates a product of three numbers" << endl;
    cout << "First number: ";
    cin >> dA;
    cout << "Second number: ";
    cin >> dB;
    cout << "Third number: ";
    cin >> dC;
    cout << dA << " * " << dB << " * " << dC << " = " << dA * dB * dC << endl;
    return 0;
}
int exercise_no3_1()
{
    int nNumber;
    cout << "Classification of a number" << endl;
    cout << "Give me a number and I will classify it as a negative, positive one-digit, two-digit or another." << endl;
    cin >> nNumber;
    if (nNumber < 0)
    {
        cout << "Number " << nNumber << " is a negative number." << endl;
    } else if (nNumber >= 0 && nNumber < 10)
    {
        cout << "Number " << nNumber << " is a positive one-digit number." << endl;
    } else if (nNumber >= 10 && nNumber < 100)
    {
        cout << "Number " << nNumber << " is a positive two-digit number." << endl;
    } else
    {
        cout << "Number " << nNumber << " is classified as another type of numbers." << endl;
    }
    return 0;
}
int exercise_no3_2()
{
    cout << "Numbers from 1 to 100 and their squares" << endl;
    for (int i = 1; i <= 100; i +=2)
    {
        cout << i << " --- " << i*i << " || " << i+1 << " --- " << (i+1)*(i+1) << endl;
    }
    return 0;
}
int exercise_no3_3()
{
    cout << "Guess a number game" << endl;
    int nRandom, nGuess = 0, nGuess_count = 1;
    srand (time(NULL));
    nRandom = rand() % 100 + 1;
    cout << "I drew a number from 1 to 100. Try to guess it: " << endl;
    while (true)
    {
        cin >> nGuess;
        if (nGuess == nRandom)
        {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "It was your guess no. " << nGuess_count << endl;
            return 0;
        } else if (nGuess < nRandom)
        {
            cout << "My number is greater than yours" << endl;
            cout << "It was your guess no. " << nGuess_count << endl;;
            cout << "Try again: ";
            nGuess_count++;
        } else if (nGuess > nRandom)
        {
            cout << "My number is smaller than yours" << endl;
            cout << "It was your guess no. " << nGuess_count << endl;;
            cout << "Try again: ";
            nGuess_count++;
        }
    }
    return 0;
}
int exercise_no4_1()
{
    cout << "Assigning value of 3,000,000,000 do to int and unsigned int" << endl;
    int nVariable = 3000000000;
    unsigned int uVariable = 3000000000;
    cout << "Value of int variable: " << nVariable << endl;
    cout << "Value of unsigned int variable: " << uVariable << endl;
    return 0;
}
int exercise_no4_2()
{
    cout << "Sizeof for new names of short int and long int" << endl;
    typedef short int shorter_variable;
    typedef long int longer_variable;
    cout << "short int called now shorter_variable - size: " << sizeof(shorter_variable) << endl;
    cout << "long int called now longer_variable - size: " << sizeof(longer_variable) << endl;
    return 0;
}
int exercise_no4_3()
{
    cout << "Writing ANSI list in console with their indecies" << endl;
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
int exercise_no4_4()
{
    double dA, dB, dC, dDelta;
    cout << "Solving quadratic equations (only real solutions)";
    cout << "Equation has a form of ax^2 + bx + c" << endl;
    cout << "Write coefficient a: ";
    cin >> dA;
    cout << "Write coefficient b: ";
    cin >> dB;
    cout << "Write coefficient c: ";
    cin >> dC;
    if (dA == 0)
    {
        if (dB == 0)
        {
            if (dC == 0)
            {
                cout << "It is straight line y = 0, for which the equation has infinitely many solutions." << endl;
            } else
            {
                cout << "The equation does not have any solution." << endl;
            }
        } else
        {
            cout << "It is a linear equation with y = 0 for x = " << -dC/dB << endl;
        }
    } else
    {
        dDelta = (dB*dB)-(4 * dA * dC);
        if (dDelta < 0)
        {
            cout << "The equation does not have any real solution" << endl;
        } else if (dDelta == 0)
        {
            cout << "The equation has one real solution in x = " << (-dB)/(2 * dA) << endl;
        } else
        {
            cout << "The equation has real solutions in:" << endl;
            cout << "x1 = " << (-dB - sqrt(dDelta))/(2 * dA) << endl;
            cout << "x2 = " << (-dB + sqrt(dDelta))/(2 * dA) << endl;
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
int exercise_no4_5()
{
    unsigned int nNumber;
    cout << "Checking if a given number is prime." << endl;
    cout << "Write a number and I will check if it is prime: ";
    cin >> nNumber;
    cout << (Prime(nNumber) ? "Your number IS prime." : "Your number IS NOT prime.") << endl;
    return 0;
}
