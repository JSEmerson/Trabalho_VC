#include <iostream>
#include "Malha.h"

using namespace std;

int main() {
    float escalar1 = 0.48, escalar2 = 0.69, escalar3 = 0.84, escalar4 = 0.99;
    string diretorio = "/home/emerson/Trab2_VC/output/amostra_01.vtk";
    Malha *m1;

    m1 = new Malha();
    m1->gerarMalha("/home/emerson/Trab2_VC/dados2d.txt");
    //m1->imprimirMalha();
    m1->curvasDeNivel_forcaBruta(escalar1,diretorio);
    //m1->curvasDeNivel_forcaBruta(escalar2,diretorio);
    //m1->curvasDeNivel_forcaBruta(escalar3,diretorio);
    //m1->curvasDeNivel_forcaBruta(escalar4,diretorio);
    return 0;
}