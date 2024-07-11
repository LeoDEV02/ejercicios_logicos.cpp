/*

Si el número es divisible por 3, imprime "Fizz" en lugar del número.
Si el número es divisible por 5, imprime "Buzz" en lugar del número.
Si el número es divisible por 3 y 5, imprime "FizzBuzz" en lugar del número.

*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++) // BUcle for
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}