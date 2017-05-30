#include "Celula.h"
/** Necessita finalizar a estrutura
 */ 

class Malha
{
	private:
		Celula* celulas;
		int linhas;
		int colunas;
	public:
		Malha(int lin, int col);
		void inserirCelula(Celula* cel);
		void gerarMalha();
		~Malha();
		
};
