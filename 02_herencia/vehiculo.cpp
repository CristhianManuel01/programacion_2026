#include <iostream>
#include "vehiculo.h"

using namespace std;

// Constructor por defecto
Vehiculo::Vehiculo()
{
    marca = "Desconocida";
    modelo = "Desconocido";
    anio = 0;
}

// Constructor con parámetros
Vehiculo::Vehiculo(string marca, string modelo, int anio)
{
    this->marca = marca;
    this->modelo = modelo;
    this->anio = anio;
}

// Métodos
void Vehiculo::mostrarInformacion()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Anio: " << anio << endl;
}

string Vehiculo::obtenerMarca()
{
    return marca;
}
