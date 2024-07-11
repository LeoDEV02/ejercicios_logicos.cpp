/*
Factorial de un número:

Enunciado: Escribe un programa que calcule el factorial de un número ingresado por el usuario.
Input: Un número entero no negativo.
Output: El factorial del número.

*/
#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial (n-1);
}

int main(){
    
    int num;
    cout << "Ingresa tu numero: ";
    cin >> num;
    cout << "Tu numero es:  " << num << " El factorial de tu numero es: " << factorial(num) << endl;

    return 0;
}