/*
Conteo de vocales:

Enunciado: Escribe un programa que cuente el número de vocales en una cadena de texto ingresada por el usuario.
Input: Una cadena de texto.
Output: El número de vocales en la cadena.
*/

#include <iostream>
#include <string>

using namespace std;

// Función que verifica si un caracter es una vocal
bool esVocal(char c){
    c = tolower(c); //tolower reconoce mayuscualas y minusculas por igual
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); //Retorna true si es vocal y si no pss no
}

//Empieza el programa
int main() {
    string texto; //Declaramos una variable string
    cout << "Escribe una o mas palabras aqui: "; // Mensaje solicitando Datos
    getline(cin, texto); // lee la entrada de texto del usuario y la almacena el variable texto
    int num = 0;//El contador de vocales empieza en 0 con la variable llama num
    // itera sobre cada caracter de la cadena texto
    for (char c : texto){
        if (esVocal(c)) num++; // si el caracter es una vocal aumenta el contador
    }
    cout << "Numero De vocales: " << num << endl;
return 0;
}

