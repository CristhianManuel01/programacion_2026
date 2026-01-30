#include "estudiante.h"
#include <iostream>

Estudiante::Estudiante()
{
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0;
    activo = false;
}

// parámetros
Estudiante::Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo)
{
    // Se usa this-> para diferenciar atributos de parámetros
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

void Estudiante::actualizarNombre(std::string nuevoNombre)
{
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(std::string nuevoCodigo)
{
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad)
{
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio)
{
    // Validación del rango permitido
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0)
    {
        promedio = nuevoPromedio;
    }
    else
    {
        std::cout << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado)
{
    activo = nuevoEstado;
}

//GETTERS

std::string Estudiante::obtenerNombre()
{
    return nombre;
}

std::string Estudiante::obtenerCodigo()
{
    return codigo;
}

int Estudiante::obtenerEdad()
{
    return edad;
}

float Estudiante::obtenerPromedio()
{
    return promedio;
}

bool Estudiante::obtenerActivo()
{
    return activo;
}

void Estudiante::mostrarNombre()
{
    std::cout << "Nombre: " << nombre << std::endl;
}

void Estudiante::mostrarCodigo()
{
    std::cout << "Código: " << codigo << std::endl;
}

void Estudiante::mostrarEdad()
{
    std::cout << "Edad: " << edad << " años" << std::endl;
}

void Estudiante::mostrarPromedio()
{
    std::cout << "Promedio: " << promedio << std::endl;
}

void Estudiante::mostrarActivo()
{
    if (activo)
    {
        std::cout << "Estado: Activo" << std::endl;
    }
    else
    {
        std::cout << "Estado: Inactivo" << std::endl;
    }
}

void Estudiante::mostrarInformacionCompleta()
{
    // Muestra todos los datos del estudiante
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

void Estudiante::incrementarEdad()
{
    // Incrementa la edad en 1 año
    edad++;
}

void Estudiante::calcularEstadoAcademico()
{
    std::cout << "Estado académico: ";

    if (promedio >= 9.0 && promedio <= 10.0)
    {
        std::cout << "Excelente";
    }
    else if (promedio >= 8.0)
    {
        std::cout << "Muy Bueno";
    }
    else if (promedio >= 7.0)
    {
        std::cout << "Bueno";
    }
    else if (promedio >= 6.0)
    {
        std::cout << "Regular";
    }
    else
    {
        std::cout << "Necesita Mejorar";
    }

    std::cout << std::endl;
}
