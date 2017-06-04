#include "Malha.h"

Malha::Malha(int lin, int col)
{
	linhas = lin;
	colunas = col;
	celulas.reserve(lin*col); //reserva espaco para lin*col celulas
}

//PRECISA SER IMPLEMENTADA COM MAIS CUIDADO
void Malha::inserirCelula(Celula* cel)
{
	celulas.push_back(cel);
}

void gerarMalha();
{
	//...
}
