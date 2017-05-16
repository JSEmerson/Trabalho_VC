#include <iostream>

class Ponto
{
	public:
		float x;
		float y;
		float z;
		float intensidade;

	private:
		Ponto();
		void adicionarPonto(float xx, float yy, float it);
		void adicionarPonto(float xx, float yy, float zz, float it);
		float consultarX();
		float consultarY();
		float consultarZ();
		float consultarIntensidade();
		Ponto* consultarPonto();
		~Ponto();
};