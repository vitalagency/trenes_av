#include "VagonCarga.h"

VagonCarga::VagonCarga(float pe):pesoEspecifico(pe){}

VagonCisterna::VagonCisterna(float li, float pe): VagonCarga(pe), litros(li){}

float VagonCisterna::calcularPeso(){
    peso = litros * pesoEspecifico;
    return peso;
}    

VagonPlataforma::VagonPlataforma(float m3, float pe): VagonCarga(pe), metrosCubicos(m3){}    

float VagonPlataforma::calcularPeso(){
    peso = metrosCubicos * pesoEspecifico;
    return peso;
}