#ifndef TRAB2_VC_VERTICE_H
#define TRAB2_VC_VERTICE_H

class Vertice
{
private:
    float x,y,z,intensidade;
public:
    Vertice();
    void definirVertice(float xx, float yy, float it);
    void definirVertice(float xx, float yy, float zz, float it);
    float consultarX();
    float consultarY();
    float consultarZ();
    float consultarIntensidade();
    ~Vertice();
};

#endif //TRAB2_VC_VERTICE_H


