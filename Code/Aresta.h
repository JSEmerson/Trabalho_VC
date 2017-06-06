#include <iostream>
#include "Vertice.h"

class Aresta
{
	private:
		Vertice* vertice1;
		Vertice* vertice2;

	public:
		Aresta();
		Vertice* consultarVertice1();
		Vertice* consultarVertice2();
		void definirVertice1(Vertice* v1);
		void definirVertice2(Vertice* v2);
		~Aresta();


};
