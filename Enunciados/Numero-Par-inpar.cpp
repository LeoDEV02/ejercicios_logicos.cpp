/*
Número par o impar:

Enunciado: Escribe un programa que determine si un número ingresado por el usuario es par o impar.
Input: Un número entero.
Output: "Par" o "Impar".
*/
#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Ingrese Su Numero: ";
    cin >> num;
    
    if (num % 2 == 0)
    {
        cout << num << " Es par";
    }
    else
        cout << num << " Es Impar" << endl;
    return 0;
}