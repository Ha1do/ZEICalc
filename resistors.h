//
// Created by Ha1do on 07.01.2024.
//
#ifndef ZEI_RESISTORS_H
#define ZEI_RESISTORS_H

#endif //ZEI_RESISTORS_H

#include <stdexcept>

using namespace std;

double posledovatelno()
{
    cout << "Сколько?: ";
    int k;
    cin >> k;
    vector<double> arr;
    for (int i = 0; i < k; i++)
    {
        double a;
        cin >> a;
        arr.push_back(a);
    }

    double sum = 0.0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double paralelno()
{
    cout << "Сколько?: ";
    int k;
    cin >> k;
    if (k == 2)
    {
        double f, s;
        cin >> f >> s;
        double res = (f * s) / (f + s);
        return res;
    }
    else
    {
        vector<double> arr;
        for (int i = 0; i < k; i++)
        {
            double a;
            cin >> a;
            arr.push_back(a);
        }

        double sum = 0.0;
        for (const auto& num : arr) {
            if (num == 0) {
                throw std::invalid_argument("Элемент вектора не должен быть равен нулю");
            }
            sum += 1 / num;
        }

        return 1/sum;
    }
}

void TrTringle()
{
    double R1, R2, R3;
    cout << "Enter R1, R2, R3: " << endl;
    cin >> R1 >> R2 >> R3;

    cout << "Ra = " << (R1 * R2) / (R1 + R2 + R3) << endl;
    cout << "Rb = " << (R1 * R3) / (R1 + R2 + R3) << endl;
    cout << "Rc = " << (R2 * R3) / (R1 + R2 + R3) << endl;
}

void TrStar()
{
    double Ra, Rb, Rc;
    cout << "Enter Ra, Rb, Rc: " << endl;
    cin >> Ra >> Rb >> Rc;

    cout << "R1 = " << Ra + Rb + (Ra * Rb) / Rc << endl;
    cout << "R2 = " << Ra + Rc + (Ra * Rc) / Rb << endl;
    cout << "R3 = " << Rb + Rc + (Rb * Rc) / Ra << endl;
}
