#include <iostream>
#include <cmath>

using namespace std;

/* Integrantes: José Antonio Vásquez, Adrian Aguirre, Jesús arrieche, Luis Espinozas  */

/*Realice un programa que contenga un menú de opciones y en cada opción
ejecutara los siguientes requerimientos. Un algoritmo que calcule el factorial de un número dado. 
Un algoritmo que calcule el valor absoluto de un número dato.
Un algoritmo que calcule el promedio para cualquier cantidad de
elementos dados. Se debe usar funciones */

// Función para calcular el factorial de un número
int factorial(int n) {
    if (n < 0) {
        return -1; // No existe el factorial de un número negativo
    } else if (n == 0 || n == 1) {
        return 1; // El factorial de 0 y 1 es 1
    } else {
        return n * factorial(n - 1); // Cálculo recursivo del factorial
    }
}

// Función para calcular el valor absoluto de un número
double valorAbsoluto(double num) {
    return abs(num);
}

// Función para calcular el promedio de un numero generico o general
double calcularPromedio(double elementos[], int cantidad) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return suma / cantidad;
}

int main() {
    int opcion;
    do {
        cout << "Menú de Opciones" << endl;
        cout << "1. Calcular factorial" << endl;
        cout << "2. Calcular valor absoluto" << endl;
        cout << "3. Calcular promedio" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Ingrese un número para calcular su factorial: ";
                cin >> num;
                int resultado = factorial(num);
                if (resultado == -1) {
                    cout << "No se puede calcular el factorial de un número negativo." << endl;
                } else {
                    cout << "El factorial de " << num << " es " << resultado << endl;
                }
                break;
            }
            case 2: {
                double num;
                cout << "Ingrese un número para calcular su valor absoluto: ";
                cin >> num;
                cout << "El valor absoluto de " << num << " es " << valorAbsoluto(num) << endl;
                break;
            }
            case 3: {
                int cantidad;
                cout << "Ingrese la cantidad de elementos: ";
                cin >> cantidad;
                double elementos[cantidad];
                for (int i = 0; i < cantidad; i++) {
                    cout << "Ingrese el elemento " << i + 1 << ": ";
                    cin >> elementos[i];
                }
                cout << "El promedio es: " << calcularPromedio(elementos, cantidad) << endl;
                break;
            }
            case 4: {
                cout << "Saliendo del programa." << endl;
                break;
            }
            default: {
                cout << "Opción inválida. Por favor seleccione una opción válida." << endl;
                break;
            }
        }
    } while (opcion != 4);

    return 0;
}


