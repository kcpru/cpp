#include "moja_biblioteka.h"

float suma(float a, float b)
{
    return a + b;
}

DwieLiczby::DwieLiczby(float a, float b)
{
    this->a = a;
    this->b = b;
}

float DwieLiczby::suma(void)
{
    return a + b;
}
