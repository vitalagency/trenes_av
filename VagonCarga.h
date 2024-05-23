#ifndef VAGONCARGA_H
#define VAGONCARGA_H

#include "Vagon.h"

class VagonCarga: public Vagon{
protected:
    float pesoEspecifico; 
public:
    VagonCarga(float pe);
};

class VagonCisterna: public VagonCarga{
private: 
    float litros;
public:
    VagonCisterna(float li, float pe);
    float calcularPeso();
};

class VagonPlataforma: public VagonCarga{
private:
    float metrosCubicos;
public: 
    VagonPlataforma(float m3, float pe);
    float calcularPeso();
};

#endif