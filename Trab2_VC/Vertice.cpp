#include <iostream>
#include "Vertice.h"

using namespace std;

Vertice::Vertice()
{

}

void Vertice::definirVertice(float xx, float yy, float it)
{
    x = xx;
    y = yy;
    z = 0;
    intensidade = it;
}

void Vertice::definirVertice(float xx, float yy, float zz, float it)
{
    x = xx;
    y = yy;
    z = zz;
    intensidade = it;
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

Vertice::~Vertice()
{

}

