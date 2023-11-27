#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    int inicio = 0;
    int fin = n - 1;

    while (inicio < fin)
    {
        int mitad = inicio + (fin - inicio) / 2;

        if (nums[mitad] > nums[fin])
        {
            inicio = mitad + 1;
        }
        else if (nums[mitad] < nums[fin])
        {
            fin = mitad;
        }
        else 
        {
            fin--;
        }
    }
    return nums[inicio];
}
