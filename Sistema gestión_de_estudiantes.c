#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ESTUDIANTES 100
#define MAX_TEXTO 100

// Estructura Estudiante
typedef struct
{
    char nombre[MAX_TEXTO]; // Nombre completo del estudiante
    char codigo[MAX_TEXTO]; // Código único del estudiante
    int edad;               // Edad del estudiante
    float promedio;         // Promedio (0.0 a 10.0)
    bool activo;            // Estado activo/inactivo
} Estudiante;

// Prototipos de funciones
void actualizarNombre(Estudiante *e, char nuevoNombre[]);
void actualizarCodigo(Estudiante *e, char nuevoCodigo[]);
void actualizarEdad(Estudiante *e, int nuevaEdad);
void actualizarPromedio(Estudiante *e, float nuevoPromedio);
void actualizarActivo(Estudiante *e, bool nuevoEstado);

void mostrarNombre(Estudiante e);
void mostrarCodigo(Estudiante e);
void mostrarEdad(Estudiante e);
void mostrarPromedio(Estudiante e);
void mostrarActivo(Estudiante e);
void mostrarInformacionCompleta(Estudiante e);

int buscarEstudiantePorCodigo(Estudiante lista[], int total, char codigo[]);

// Función principal
int main()
{
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int total = 0;
    int opcion;

    do
    {
        printf("\n===== SISTEMA DE GESTIÓN DE ESTUDIANTES =====\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante en específico\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar(); // limpiar buffer

        switch (opcion)
        {
        case 1:
        {
            if (total >= MAX_ESTUDIANTES)
            {
                printf("No se pueden agregar más estudiantes.\n");
                break;
            }

            Estudiante e;

            printf("Ingrese nombre completo: ");
            fgets(e.nombre, MAX_TEXTO, stdin);
            e.nombre[strcspn(e.nombre, "\n")] = '\0';

            printf("Ingrese código: ");
            fgets(e.codigo, MAX_TEXTO, stdin);
            e.codigo[strcspn(e.codigo, "\n")] = '\0';

            printf("Ingrese edad: ");
            scanf("%d", &e.edad);

            printf("Ingrese promedio (0.0 - 10.0): ");
            scanf("%f", &e.promedio);

            if (e.promedio < 0.0 || e.promedio > 10.0)
            {
                printf("Promedio inválido. Se asignará 0.0\n");
                e.promedio = 0.0;
            }

            e.activo = true; // Por defecto activo

            estudiantes[total] = e;
            total++;

            printf("Estudiante agregado correctamente.\n");
            break;
        }
        case 2:
        {
            char codigoBuscar[MAX_TEXTO];
            printf("Ingrese el código del estudiante: ");
            fgets(codigoBuscar, MAX_TEXTO, stdin);
            codigoBuscar[strcspn(codigoBuscar, "\n")] = '\0';

            int indice = buscarEstudiantePorCodigo(estudiantes, total, codigoBuscar);
            if (indice == -1)
            {
                printf("Estudiante no encontrado.\n");
            }
            else
            {
                mostrarInformacionCompleta(estudiantes[indice]);
            }
            break;
        }
        case 3:
            if (total == 0)
            {
                printf("No hay estudiantes registrados.\n");
            }
            else
            {
                for (int i = 0; i < total; i++)
                {
                    printf("\n--- Estudiante %d ---\n", i + 1);
                    mostrarInformacionCompleta(estudiantes[i]);
                }
            }
            break;
        case 4:
            printf("Saliendo del sistema...\n");
            break;
        default:
            printf("Opción inválida.\n");
        }
    } while (opcion != 4);

    return 0;
}

// Funciones de actualización

void actualizarNombre(Estudiante *e, char nuevoNombre[])
{
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(Estudiante *e, char nuevoCodigo[])
{
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(Estudiante *e, int nuevaEdad)
{
    e->edad = nuevaEdad;
}

void actualizarPromedio(Estudiante *e, float nuevoPromedio)
{
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0)
    {
        e->promedio = nuevoPromedio;
    }
    else
    {
        printf("Promedio inválido. No se actualizó.\n");
    }
}

void actualizarActivo(Estudiante *e, bool nuevoEstado)
{
    e->activo = nuevoEstado;
}

// Funciones de visualización

void mostrarNombre(Estudiante e)
{
    printf("Nombre: %s\n", e.nombre);
}

void mostrarCodigo(Estudiante e)
{
    printf("Código: %s\n", e.codigo);
}

void mostrarEdad(Estudiante e)
{
    printf("Edad: %d años\n", e.edad);
}

void mostrarPromedio(Estudiante e)
{
    printf("Promedio: %.2f\n", e.promedio);
}

void mostrarActivo(Estudiante e)
{
    if (e.activo)
        printf("Estado: Activo\n");
    else
        printf("Estado: Inactivo\n");
}

void mostrarInformacionCompleta(Estudiante e)
{
    // Mostrar nombre del estudiante
    mostrarNombre(e);

    // Mostrar código del estudiante
    mostrarCodigo(e);

    // Mostrar edad del estudiante
    mostrarEdad(e);

    // Mostrar promedio del estudiante
    mostrarPromedio(e);

    // Mostrar estado activo/inactivo
    mostrarActivo(e);
}

// Función de búsqueda

int buscarEstudiantePorCodigo(Estudiante lista[], int total, char codigo[])
{
    for (int i = 0; i < total; i++)
    {
        if (strcmp(lista[i].codigo, codigo) == 0)
        {
            return i;
        }
    }
    return -1;
}
