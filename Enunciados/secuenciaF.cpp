/*
        7. Fibonacci:
            ○ Enunciado: Escribe un programa que genere la secuencia de Fibonacci hasta el n-ésimo término.
            ○ Input: Un número entero n.
            ○ Output: Los primeros n términos de la secuencia de Fibonacci.

*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;

    cout << "Cantidad de elementos";
    cin >> num;


    for (int i = 1; i < num; i++)
    {
        num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }
    return 0;
}