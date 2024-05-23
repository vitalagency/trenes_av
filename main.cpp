#include <iostream>
#include <vector>
#include <string>
#include "Vagon.h"
#include "VagonPasajeros.h"
#include "VagonCarga.h"
#include "Tren.h"

using namespace std;

int main(){
    Tren tren(10,2);
    tren.agregarVagon(new VagonPasajeros(10,VagonPasajeros::TURISTA)); // 700
    tren.agregarVagon(new VagonCisterna(20,0.5)); // 10
    tren.agregarVagon(new VagonPlataforma(5,2.0)); // 10
    float pesoTotal = tren.calcularPesoTotal();
    cout << "El peso total es: " << pesoTotal << endl;
}









