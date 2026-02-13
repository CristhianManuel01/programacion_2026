#include <iostream>
#include "coche.h"

using namespace std;

int main()
{

    Coche miCoche("Toyota", "Corolla", 2023, 4);

    cout << "Informacion del coche:" << endl;
    miCoche.mostrarInformacion();

    return 0;
}
