#ifndef VAGONCARGA_H
#define VAGONCARGA_H

#include "Vagon.h"

// Vagon Carga
class VagonCarga: public Vagon{
protected:
    float pesoEspecifico; 
public:
    VagonCarga(float pe);
};

// Vagon Cisterna
class VagonCisterna: public VagonCarga{
private: 
    float litros;
public:
    VagonCisterna(float li, float pe);
    float calcularPeso();
};


// Vagon Plataforma
class VagonPlataforma: public VagonCarga{
private:
    float metrosCubicos;
public: 
    VagonPlataforma(float m3, float pe);
    float calcularPeso();
};

#endif