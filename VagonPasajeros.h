
#ifndef VAGONPASAJEROS_H
#define VAGONPASAJEROS_H
#include <string>
#include "Vagon.h"
using namespace std;


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
    float precioReserva;

    public:
    Reserva(auto nombreReserva,float precioReserva);

    virtual:
    int numAsientos;
    

};


// Clase Precios

// Precio Turista  $3.00 
class PrecioTurista: public Vagon{
    private:
    string nombre; 

    public:
    float precioTurista;

}

// Precio Lujo  $9.00 

class PrecioLujo: public Vagon{
    private: 
    string nombre;

    public:
    float precioLujo;

}

#endif
