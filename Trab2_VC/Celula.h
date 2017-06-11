#ifndef TRAB2_VC_CELULA_H
#define TRAB2_VC_CELULA_H

#include "Aresta.h"

class Celula
{
    private:
        //Vetor contendo as 4 arestas da celula (sentido anti-horario)
        Aresta* arestas;
    public:
        Celula();
        void definirCelula(Aresta *a1, Aresta *a2, Aresta *a3, Aresta *a4);
        Aresta* consultarArestas();
        ~Celula();
};

#endif //TRAB2_VC_CELULA_H
