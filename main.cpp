#include <iostream>
#include <vector>

using namespace std;

/* Integrantes: José Antonio Vásquez, Adrian Aguirre, Jesús arrieche, Luis Espinozas  */

/*Realice un programa que contenga un menú de opciones y en cada opción
ejecutara los siguientes requerimientos. Un algoritmo que calcule el factorial de un número dado. 
Un algoritmo que calcule el valor absoluto de un número dato.
Un algoritmo que calcule el promedio para cualquier cantidad de
elementos dados.*/

// Función para calcular el factorial de un número
long long factorial(int n) {
    if (n < 0) {
        cout << "Error: No existe el factorial de un número negativo." << endl;
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        long long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

// Función para calcular el valor absoluto de un número
int absoluto(int n) {
    return (n < 0)? -n : n;
}
