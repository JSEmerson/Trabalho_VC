#include "Aresta.h"
#include "Celula.h"

Celula::Celula()
{
    arestas = new Aresta[4];
}

void Celula::definirCelula(Aresta *a1, Aresta *a2, Aresta *a3, Aresta *a4)
{
    arestas[0] = *a1;
    arestas[1] = *a2;
    arestas[2] = *a3;
    arestas[3] = *a4;
}

Aresta* Celula::consultarArestas()
{
    return arestas;
}

Celula::~Celula()
{

    arestas[0] = NULL;
    arestas[1] = NULL;
    arestas[2] = NULL;
    arestas[3] = NULL;
    delete arestas;

}
