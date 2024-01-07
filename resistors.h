//
// Created by Ha1do on 07.01.2024.
//
#ifndef ZEI_RESISTORS_H
#define ZEI_RESISTORS_H

#endif //ZEI_RESISTORS_H

int posledovatelno(int size, std::vector<int>& vec)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += vec[i];
    }
    return sum;
}
