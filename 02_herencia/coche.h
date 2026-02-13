#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"

class Coche : public Vehiculo
{
private:
    int numeroPuertas;

public:
    // Constructores
    Coche();
    Coche(string marca, string modelo, int anio, int numeroPuertas);

    // Métodos
    void mostrarInformacion(); // Sobrescritura
    int obtenerNumeroPuertas();
};

#endif
