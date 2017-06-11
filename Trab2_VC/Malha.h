#ifndef TRAB2_VC_MALHA_H
#define TRAB2_VC_MALHA_H

/**
 *  Estrutura que guarda as celulas e as operacoes
 *  Algoritmo Forca Bruta e Marching Squares para
 *  deteccao de isolinhas (ou curvas de nivel ou ainda
 *  superficies equipotenciais)
 */

#include "Celula.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Malha
{
    private:
        vector<Celula*> *celulas; //vector que guarda as celulas
    public:
        Malha();
        void inserirCelula(Celula* cel);
        void gerarMalha(string txt);
        void imprimirMalha();
        ~Malha();

};

#endif //TRAB2_VC_MALHA_H