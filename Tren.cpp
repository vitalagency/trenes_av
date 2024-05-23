#include <iostream>
#include "Tren.h"

Tren::Tren(float loco, float cola): locomotora(loco), vagonCola(cola){}

void Tren::agregarVagon(Vagon* v){
    vagones.push_back(v);
}

float Tren::calcularPesoTotal(){
    float total = locomotora + vagonCola;
    /* for (int k=0; k<vagones.size(); k++){
        Vagon* vagon = vagones[k];
        total += vagon->calcularPeso();
    } */
    for (auto vagon: vagones) total += vagon->calcularPeso();
    return total;
}

Tren::~Tren(){
    cout << "Destructor de tren" << endl;
    for (auto vagon: vagones)
        delete vagon;
}