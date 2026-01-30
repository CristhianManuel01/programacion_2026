#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

// Declaración de la clase Estudiante
class Estudiante
{
private:
    // Atributos privados (encapsulamiento)
    std::string nombre;
    std::string codigo;
    int edad;
    float promedio;
    bool activo;

public:
    // Constructor por defecto
    Estudiante();

    // Constructor con parámetros
    Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo);

    // setters (actualizar valores)
    void actualizarNombre(std::string nuevoNombre);
    void actualizarCodigo(std::string nuevoCodigo);
    void actualizarEdad(int nuevaEdad);
    void actualizarPromedio(float nuevoPromedio);
    void actualizarActivo(bool nuevoEstado);

    // getters (obtener valores)
    std::string obtenerNombre();
    std::string obtenerCodigo();
    int obtenerEdad();
    float obtenerPromedio();
    bool obtenerActivo();

    // Mostrar información
    void mostrarNombre();
    void mostrarCodigo();
    void mostrarEdad();
    void mostrarPromedio();
    void mostrarActivo();
    void mostrarInformacionCompleta();

    // Utilidad
    void incrementarEdad();
    void calcularEstadoAcademico();
};

#endif

