#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo
{
protected:
    string marca;
    string modelo;
    int anio;

public:
    // Constructores
    Vehiculo();
    Vehiculo(string marca, string modelo, int anio);

    // Métodos
    void mostrarInformacion();
    string obtenerMarca();
};

#endif
