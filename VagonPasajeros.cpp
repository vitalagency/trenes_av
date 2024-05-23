
#include "VagonPasajeros.h"

VagonPasajeros::VagonPasajeros(int pas, Clase cl): Vagon(), pasajeros(pas), clase(cl){}

float VagonPasajeros::calcularPeso(){
    peso = pasajeros * 70.0;
    return peso;
}

int Reserva::precio(){

}

// Precio Turista

int VagonPasajeros::PrecioTursita(){
    cout << "Precio de Turista" << precioTurista << endl ;
    return PrecioTursita
}



// Precio Lujo
int VagonPasajeros::PrecioLujo(){
    cout << "Precio de Lujo" << precioLujo << endl ;


    return PrecioLujo
}
 