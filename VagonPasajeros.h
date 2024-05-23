
#ifndef VAGONPASAJEROS_H
#define VAGONPASAJEROS_H

#include "Vagon.h"

// Clase Vagon Pasajeros

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

class Reserva: public Vagon{
    private:
    auto nombreReserva;

    public:
    
    int numAsientos;
    Reserva(auto nombreReserva, int numAsientos);


    virtual int numAsientos;
    virtual int ClasePajero;

    

};




#endif
