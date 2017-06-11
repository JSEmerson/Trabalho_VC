#ifndef TRAB2_VC_VERTICE_H
#define TRAB2_VC_VERTICE_H

class Vertice
{
private:
    int id;
    float x,y,z,intensidade;
public:
    Vertice();
    void definirVertice(float xx, float yy, float it, int i);
    void definirVertice(float xx, float yy, float zz, float it);
    float consultarX();
    float consultarY();
    float consultarZ();
    float consultarIntensidade();
    int consultarId();
    ~Vertice();
};

#endif //TRAB2_VC_VERTICE_H

