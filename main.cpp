#include <iostream>
#include <vector>

using namespace std;

/* Integrantes: Jos� Antonio V�squez, Adrian Aguirre, Jes�s arrieche, Luis Espinozas  */

/*Realice un programa que contenga un men� de opciones y en cada opci�n
ejecutara los siguientes requerimientos. Un algoritmo que calcule el factorial de un n�mero dado. 
Un algoritmo que calcule el valor absoluto de un n�mero dato.
Un algoritmo que calcule el promedio para cualquier cantidad de
elementos dados.*/

// Funci�n para calcular el factorial de un n�mero
long long factorial(int n) {
    if (n < 0) {
        cout << "Error: No existe el factorial de un n�mero negativo." << endl;
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

// Funci�n para calcular el valor absoluto de un n�mero
int absoluto(int n) {
    return (n < 0)? -n : n;
}
