#ifndef TREN_H
#define TREN_H

#include <iostream>
#include <vector>
#include "Vagon.h"

using namespace std;

class Tren{
private: 
    float locomotora;
    vector <Vagon*> vagones;
    float vagonCola;
public:
    Tren(float loco, float cola);
    void agregarVagon(Vagon* v);
    float calcularPesoTotal();
    ~Tren();
};

#endif