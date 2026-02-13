include <iostream>
#include "coche.h"

using namespace std;

// Constructor por defecto
Coche::Coche() : Vehiculo()
{
    numeroPuertas = 0;
}

// Constructor con parámetros
Coche::Coche(string marca, string modelo, int anio, int numeroPuertas)
    : Vehiculo(marca, modelo, anio)
{
    this->numeroPuertas = numeroPuertas;
}

// Sobrescritura del método
void Coche::mostrarInformacion()
{
    Vehiculo::mostrarInformacion(); // Llamar método base
    cout << "Numero de puertas: " << numeroPuertas << endl;
}

int Coche::obtenerNumeroPuertas()
{
    return numeroPuertas;
}
