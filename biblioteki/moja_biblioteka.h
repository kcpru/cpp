#ifndef MOJA_BIBLIOTEKA_H_INCLUDED
#define MOJA_BIBLIOTEKA_H_INCLUDED

float suma(float, float);

class DwieLiczby
{
public:
    float a, b;

    DwieLiczby(float, float);

    float suma(void);
};

class TrzyLiczby: public DwieLiczby
{
public:
    float c;

    TrzyLiczby(float):DwieLiczby();

    float suma(void);
};

#endif // MOJA_BIBLIOTEKA_H_INCLUDED
