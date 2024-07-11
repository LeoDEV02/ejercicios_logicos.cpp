/*
Suma de dos números:

Enunciado: Escribe un programa que lea dos números enteros del usuario y muestre su suma.
Input: Dos números enteros.
Output: La suma de los dos números.

*/

#include <iostream>

using namespace std;

int main () {
    int a, b;
    cout << "Ingrese o Escriba sus números separados por un espacio: ";
    cin >> a >> b;
    int suma = a + b;
    cout << "la Suma es: " << suma << endl;
    return 0;
}