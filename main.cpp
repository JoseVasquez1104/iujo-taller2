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

// Funci�n para calcular el promedio gen�rico o general
double promedio(vector<double> valores) {
    double suma = 0.0;
    for (double valor : valores) {
        suma += valor;
    }
    return suma / valores.size();
}
// La union de los 3 Ejercicios en un solo programa
int main() {
    int opcion;
    int numero;
    vector<double> valores;

    do {
        cout << "Men� de opciones:" << endl;
        cout << "1. Calcular factorial de un n�mero" << endl;
        cout << "2. Calcular valor absoluto de un n�mero" << endl;
        cout << "3. Calcular promedio gen�rico" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un n�mero: ";
                cin >> numero;
                long long resultado = factorial(numero);
                if (resultado!= -1) {
                    cout << "El factorial de " << numero << " es " << resultado << endl;
                }
                break;
            case 2:
                cout << "Ingrese un n�mero: ";
                cin >> numero;
                cout << "El valor absoluto de " << numero << " es " << absoluto(numero) << endl;
                break;
            case 3:
                cout << "Ingrese la cantidad de valores: ";
                int cantidad;
                cin >> cantidad;
                valores.clear();
                for (int i = 0; i < cantidad; i++) {
                    double valor;
                    cout << "Ingrese valor " << (i + 1) << ": ";
                    cin >> valor;
                    valores.push_back(valor);
                }
                cout << "El promedio es: " << promedio(valores) << endl;
                break;
            case 4:
                cout << "Adi�s!" << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion!= 4);

    return 0;
}
