#include <iostream>
#include "estudiante.h"

int main()
{
    std::cout << "=== Sistema de Gestión de Estudiante ===" << std::endl
              << std::endl;

    // Crear estudiante con constructor por defecto
    Estudiante estudiante1;
    std::cout << "Estudiante 1 (constructor por defecto):" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    std::cout << std::endl;

    // Actualizar información del estudiante 1
    estudiante1.actualizarNombre("María García López");
    estudiante1.actualizarCodigo("EST-2024-001");
    estudiante1.actualizarEdad(20);
    estudiante1.actualizarPromedio(9.2);
    estudiante1.actualizarActivo(true);

    std::cout << "Estudiante 1 después de actualizar:" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    std::cout << std::endl;

    // Crear estudiante con constructor con parámetros
    Estudiante estudiante2("Juan Pérez Martínez", "EST-2024-002", 22, 7.5, true);
    std::cout << "Estudiante 2 (constructor con parámetros):" << std::endl;
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    std::cout << std::endl;

    // Incrementar edad del estudiante 2
    std::cout << "Incrementando edad del estudiante 2:" << std::endl;
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    std::cout << std::endl;

    // Probar validación de promedio
    std::cout << "Intentando actualizar promedio con valor inválido:" << std::endl;
    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();
    std::cout << std::endl;

    Estudiante estudiante3("Emilio Sanchez Gutierres", "EST-2024-003", 24, 8.0, true);
    std::cout << "Estudiante 3 (constructor con parametros): " << std::endl;
    estudiante3.mostrarInformacionCompleta();
    estudiante3.calcularEstadoAcademico();
    std::cout << std::endl;

    std::cout << "Incrementado edad de estudiande 3:" << std::endl;
    estudiante3.incrementarEdad();
    estudiante3.mostrarEdad();
    std::cout << std::endl;

    std::cout << "intentado actualizar promedio con valor invalido" << std::endl;
    estudiante3.actualizarPromedio(16.0);
    estudiante3.calcularEstadoAcademico();
    std::cout << std::endl;

    Estudiante estudiante4("george ku garcia", "EST-2024-004", 19, 6.5, true);
    std::cout << "Estudiante 4 (constructor con parametros): " << std::endl;
    estudiante4.mostrarInformacionCompleta();
    estudiante4.calcularEstadoAcademico();
    std::cout << std::endl;

    std::cout << "Incrementado edad de estudiande 4:" << std::endl;
    estudiante4.incrementarEdad();
    estudiante4.mostrarEdad();
    std::cout << std::endl;

    std::cout << "intentado actualizar promedio con valor invalido" << std::endl;
    estudiante4.actualizarPromedio(13.0);
    estudiante4.calcularEstadoAcademico();
    std::cout << std::endl;

    Estudiante estudiante5("juana castillo valles", "EST-2024-005", 20, 9.5, true);
    std::cout << "Estudiante 5 (constructor con parametros): " << std::endl;
    estudiante5.mostrarInformacionCompleta();
    estudiante5.calcularEstadoAcademico();
    std::cout << std::endl;

    std::cout << "Incrementado edad de estudiande 5:" << std::endl;
    estudiante5.incrementarEdad();
    estudiante5.mostrarEdad();
    std::cout << std::endl;

    std::cout << "intentado actualizar promedio con valor invalido" << std::endl;
    estudiante5.actualizarPromedio(19.0);
    estudiante5.calcularEstadoAcademico();
    std::cout << std::endl;


    return 0;
}
