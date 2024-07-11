/*
Ordenar un arreglo:

Enunciado: Escribe un programa que ordene un arreglo de enteros usando el algoritmo de ordenamiento por burbuja (Bubble Sort).
Input: Un arreglo de enteros.
Output: El arreglo ordenado.
*/

#include <iostream>
using namespace std;

// funcion que usa el Algoritmo bubblesort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {         // Ciclo externo para pasar por todos los elementos del arreglo
        for (int j = 0; j < n - 1 - i; j++) { // Ciclo interno para comparar y intercambiar elementos
            if (arr[j] > arr[j + 1]) {       // Si el elemento actual es mayor que el siguiente
                swap(arr[j], arr[j + 1]);    // Intercambia los elementos usando la función swap de C++
            }
        }
    }
}


int main() {
    int n;
     cout << "Ingrese el tamaño de tu array: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Arreglo Ordenado: ";
    for (int i = 0; i < n; i++){
        cout << arr [i] << "";
    }

    cout << endl;

    return 0;
    
}