#include "Vertice.h"

Vertice::Vertice()
{
    id = 0;
}

void Vertice::definirVertice(float xx, float yy, float it, int i)
{
    x = xx;
    y = yy;
    z = 0;
    intensidade = it;
    id = i;
}

void Vertice::definirVertice(float xx, float yy, float zz, float it)
{
    x = xx;
    y = yy;
    z = zz;
    intensidade = it;
    id = id + 1;
}

float Vertice::consultarX()
{
    return x;
}

float Vertice::consultarY()
{
    return y;
}

float Vertice::consultarZ()
{
    return z;
}

float Vertice::consultarIntensidade()
{
    return intensidade;
}

int Vertice::consultarId()
{
    return id;
}

Vertice::~Vertice()
{

}

