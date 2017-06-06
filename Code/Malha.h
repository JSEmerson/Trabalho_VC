#include "Celula.h"
#include <vector>

/** NECESSITA FINALIZAR A ESTRUTURA
 *  Estrutura que guarda as celulas e as operacoes 
 *  Algoritmo Forca Bruta e Marching Squares para
 *  deteccao de isolinhas (ou curvas de nivel ou ainda
 *  superficies equipotenciais)
 */ 

class Malha
{
	private:
		std::vector<Celula> celulas; //<vector que guarda as celulas 
		int linhas;
		int colunas;
	public:
		Malha(int lin, int col);
		void inserirCelula(Celula* cel);
		void gerarMalha();
		~Malha();
		
};
