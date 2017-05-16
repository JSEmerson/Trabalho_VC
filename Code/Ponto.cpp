#include <iostream>
#include "Ponto.h"
 
using namespace std;

void Ponto::definirPonto(float xx, float yy, float it)
{
	x = xx;
	y = yy;
	intensidade = it;
}

void Ponto::definirPonto(float xx, float yy, float zz, float it)
{
	x = xx;
	y = yy;
	z = zz;
	intensidade = it;
}

float Ponto::consultarX()
{
	return x;
}

float Ponto::consultarY()
{
	return y;
}

float Ponto::consultarZ()
{
	return z;
}

float Ponto::consultarIntensidade()
{
	return intensidade;
}


