#include "Aresta.h"

//Construtor da classe
Aresta::Aresta()
{
	vertice1 = NULL;
	vertice2 = NULL;
}

Vertice* Aresta::consultarVertice1()
{
	return vertice1;
}

Vertice* Aresta::consultarVertice2()
{
	return vertice2;
}

void Aresta::definirVertice1(Vertice* v1)
{
	vertice1 = v1;
}

void Aresta::definirVertice2(Vertice* v2)
{
	vertice2 = v2;
}

//Destrutor da classe
Aresta::~Aresta()
{
	delete vertice1;
	delete vertice2;
}
