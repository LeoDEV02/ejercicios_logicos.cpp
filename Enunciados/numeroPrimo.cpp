/*
        6. Número primo:
            ○ Enunciado: Escribe un programa que determine si un número ingresado por el usuario es primo.
            ○ Input: Un número entero.
            ○ Output: "Primo" o "No primo".

*/
#include <iostream>
using namespace std;

/*
Funcion que determina si un numero es primo
Parametros: int n
Retorno: true si n es primo si no retorna false
*/
bool esPrimo(int n)
{
    if (n <= 1)
        return false; //Los numeros menores o iguales a 1 no son primos 
    for (int i = 2; i * i <= n; i++) // Recorre los numeros desde 2 hasta su raiz cuadrada
    {
        if (n % i == 0) // si n es divisible por i, no es primo
            return false;
    }
    return true; // si no hay divisor n es primo
}

/*
bool EsPrimo(int n) {
    if ( n <=1) return false;
    if ((n % n == 1) && (n % 1 == n)) return true;
}
*/

int main()
{
    int num;
    cout << "Ingresa Tu numero:"; //Pide un numero entero al usuario
    cin >> num;
    if (esPrimo(num)) //Evalua el numero ingresado para se procesado en la funcion esPrimo
        cout << num << " es primo" << endl;
    else
        cout << num << " no es primo" << endl;

    return 0; // cierre
}