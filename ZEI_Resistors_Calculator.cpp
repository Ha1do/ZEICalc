//
// Created by Ha1do on 07.01.2024.
//
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <map>
#include <fstream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
#include <ctime>
#include <iomanip>
#include <random>
#include <set>

#include "resistors.h"

using namespace std;


void RResistors()
{
    cout << "Последовательное - 1" << endl;
    cout << "Паралельное - 2" << endl;
    cout << "Transfiguracia Треуголник в звезду - 3" << endl;
    cout << "Transfiguracia Звезда в треугольник - 4" << endl;
    char sym;
    cin >> sym;

    switch (sym)
    {
        case '1':
            cout << posledovatelno();
            break;
        case '2':
            cout << paralelno();
            break;
        case '3':
            TrTringle();
            break;
        case '4':
            TrStar();
            break;
        default:
            // code block
            break;
    }
}

void UNapatie()
{
    cout << "U = R * I (Uc = Rc * Ic)" << endl;
    double R, I;
    cin >> R >> I;
    cout << "U = " << R * I << endl;
}

void IPrud()
{
    cout << "I cele -- 1" << endl;
    cout << "In -- 2" << endl;
    char sym;
    cin >> sym;

    if (sym == 1)
    {
        cout << "Enter U cele and Rc" << endl;
        double U, Rc;
        cin >> U >> Rc;
        cout << "I = " << U / Rc;
    }
    else
    {
        cout << "For find In Enter I, R2, R1 " << endl;

        cout << "          R2" << endl;
        cout << "I1 = I * ---" << endl;
        cout << "       R1 + R2" << endl;

        double I, R1, R2;
        cin >> I >> R2 >> R1;
        cout << "In = " << I * (R1 / (R1 + R2));
    }
}

int main()
{
    cout << "Type \"R\" for calculation resistors odpor" << endl;
    cout << "Type \"U\" for calculation napätie" << endl;
    cout << "Type \"I\" for calculation Струм/Сила тока" << endl;
    char symbol;
    cin >> symbol;
    if (symbol == 'r' || symbol == 'R')
        RResistors();
    else if (symbol == 'u' || symbol == 'U')
        UNapatie();
    else if (symbol == 'i' || symbol == 'I')
        IPrud();


    return 0;
}