
#include "VagonPasajeros.h"

VagonPasajeros::VagonPasajeros(int pas, Clase cl): Vagon(), pasajeros(pas), clase(cl){}

float VagonPasajeros::calcularPeso(){
    peso = pasajeros * 70.0;
    return peso;
}

int VagonPasajeros::precio(){
    
}