#ifndef TRAB2_VC_MALHA_H
#define TRAB2_VC_MALHA_H

/**
 *  Estrutura que guarda as celulas e as operacoes
 *  Algoritmo Forca Bruta e Marching Squares para
 *  deteccao de isolinhas (ou curvas de nivel ou ainda superficies equipotenciais)
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
    void troca(Vertice **a, Vertice **b);
    void gerarMalha(string txt);
    void imprimirMalha();
    void curvasDeNivel_forcaBruta(float val, string nomeVTK);
    void salvarResultadoVTK(vector<Vertice*> *verticesContorno, vector<int> connect, string nomeVTK);
    int buscarVertice(float x, float y,vector<Vertice*> *verticesContorno);
    ~Malha();

};

#endif //TRAB2_VC_MALHA_H