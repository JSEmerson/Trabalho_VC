#include <iostream>
#include "Vertice.h"
#include "Aresta.h"
#include "Celula.h"
#include "Malha.h"
using namespace std;

int main() {
/*//Testando a porra toda
    Vertice* v1 = new Vertice();
    Vertice* v2 = new Vertice();
    Vertice* v3 = new Vertice();
    Vertice* v4 = new Vertice();
    v1->definirVertice(0,0,0.08);
    v2->definirVertice(1,0,0.13);
    v3->definirVertice(1,1,0.26);
    v4->definirVertice(0,1,0.11);

    cout << "Testando os vertices:" << endl;
    cout << "v1 = (" << v1->consultarX() << "," << v1->consultarY() << "," << v1->consultarZ() << "," <<
            v1->consultarIntensidade() << "," << v1->consultarId() << ")" << endl;
    cout << "v2 = (" << v2->consultarX() << "," << v2->consultarY() << "," << v2->consultarZ() << "," <<
            v2->consultarIntensidade() << "," << v2->consultarId() << ")" << endl;
    cout << "v3 = (" << v3->consultarX() << "," << v3->consultarY() << "," << v3->consultarZ() << "," <<
            v3->consultarIntensidade() << "," << v3->consultarId() << ")" << endl;
    cout << "v4 = (" << v4->consultarX() << "," << v4->consultarY() << "," << v4->consultarZ() << "," <<
            v4->consultarIntensidade() << "," << v4->consultarId() << ")" << endl;

    Aresta* a1 = new Aresta();
    Aresta* a2 = new Aresta();
    Aresta* a3 = new Aresta();
    Aresta* a4 = new Aresta();
    a1->definirAresta(v1,v2);
    a2->definirAresta(v2,v3);
    a3->definirAresta(v3,v4);
    a4->definirAresta(v4,v1);

    cout << "Testando as arestas:" << endl;
    cout << "a1 = (" << (a1->consultarVertice1())->consultarId() << "," << (a1->consultarVertice2())->consultarId() << ")" << endl;
    cout << "a2 = (" << (a2->consultarVertice1())->consultarId() << "," << (a2->consultarVertice2())->consultarId() << ")" << endl;
    cout << "a3 = (" << (a3->consultarVertice1())->consultarId() << "," << (a3->consultarVertice2())->consultarId() << ")" << endl;
    cout << "a4 = (" << (a4->consultarVertice1())->consultarId() << "," << (a4->consultarVertice2())->consultarId() << ")" << endl;

    Celula* c1 = new Celula();
    c1->definirCelula(a1,a2,a3,a4);
    Aresta* arestas = c1->consultarArestas();
    cout << "Testando a celula:" << endl;
    cout << "Celula 1: " << endl;
    cout << ((arestas[0]).consultarVertice1())->consultarId() << "," << ((arestas[0]).consultarVertice2())->consultarId() << endl;
    cout << ((arestas[1]).consultarVertice1())->consultarId() << "," << ((arestas[1]).consultarVertice2())->consultarId() << endl;
    cout << ((arestas[2]).consultarVertice1())->consultarId() << "," << ((arestas[2]).consultarVertice2())->consultarId() << endl;
    cout << ((arestas[3]).consultarVertice1())->consultarId() << "," << ((arestas[3]).consultarVertice2())->consultarId() << endl;
*/

    Malha *m1;
    m1 = new Malha();
    m1->gerarMalha("/home/emerson/Trab2_VC/dados2d.txt");
    m1->imprimirMalha();
    return 0;
}