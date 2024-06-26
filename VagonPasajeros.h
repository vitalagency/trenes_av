
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



// Clase Precios

// Precio Turista  $3.00 
class PrecioTurista: public Vagon{
    private:
    string nombre; 

    public:
    int precioTurista;

}

// Precio Lujo  $9.00 

class PrecioLujo: public Vagon{
    private: 
    string nombre;

    public:
    int precioLujo;

}

// Clase Reserva

class Reserva: public Vagon{
    private:
    auto nombreReserva;

    public:
    int precioTurista;
    int precioLujo;

    virtual:
    int numAsientos;
    

};


#endif
