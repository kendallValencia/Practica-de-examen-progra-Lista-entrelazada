// HerenciaM.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaEnlazada.h"
using namespace std;

int main()
{
    ListaEnlazada lista;
    int numero;

    cout << "Ingrese numeros para agregar a la lista (ingrese -1 para terminar):" << endl;

    while (true)
    {
        cout << "Numero: ";
        cin >> numero;
        if (numero == -1)
            break;
        lista.InsertarFinal(numero);
    }

    cout << endl;
    lista.Mostrar();

    int multiplo;
    cout << "\nIngrese un numero para buscar sus multiplos en la lista: ";
    cin >> multiplo;
    lista.BuscarMultiplos(multiplo);

    cout << endl;
    lista.Promedio();

    cout << "\nPrograma finalizado." << endl;
    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
