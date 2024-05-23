
#ifndef VAGONPASAJEROS_H
#define VAGONPASAJEROS_H

#include "Vagon.h"

class VagonPasajeros: public Vagon{
public:
    enum Clase {TURISTA, LUJO};
private:
    int pasajeros;
    Clase clase;
public:
    VagonPasajeros(int pas, Clase cl);
    float calcularPeso();
    int precio;
};
// Clase Reserva
class Reserva: public VagonPasajeros{
    public:
    int precio;
    

};

#endif
