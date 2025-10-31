#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada()
{
    cabeza = nullptr;
    cola = nullptr;
}

void ListaEnlazada::InsertarFinal(int valor)
{
    Nodo* nuevo = new Nodo(valor);

    if (cabeza == nullptr)
    {
        cabeza = nuevo;
        cola = nuevo;
    }
    else
    {
        cola->siguiente = nuevo;
        nuevo->anterior = cola;
        cola = nuevo;
    }
}

void ListaEnlazada::Mostrar()
{
    cout << "Lista actual: ";
    Nodo* actual = cabeza;
    while (actual != nullptr)
    {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

void ListaEnlazada::BuscarMultiplos(int numero)
{
    cout << "Buscando multiplos de " << numero << "..." << endl;
    Nodo* actual = cabeza;
    int posicion = 1;
    bool encontrado = false;

    while (actual != nullptr)
    {
        if (actual->dato % numero == 0)
        {
            cout << "El numero " << actual->dato << " es multiplo. Posicion: " << posicion << endl;
            encontrado = true;
        }
        actual = actual->siguiente;
        posicion++;
    }

    if (!encontrado)
    {
        cout << "No se encontraron multiplos de " << numero << " en la lista." << endl;
    }
}

void ListaEnlazada::Promedio()
{
    Nodo* actual = cabeza;
    int suma = 0;
    int contador = 0;

    while (actual != nullptr)
    {
        suma += actual->dato;
        contador++;
        actual = actual->siguiente;
    }

    if (contador == 0)
    {
        cout << "La lista esta vacia. No se puede calcular el promedio." << endl;
    }
    else
    {
        double promedio = (double)suma / contador;
        cout << "El promedio de los valores es: " << promedio << endl;
    }
}
