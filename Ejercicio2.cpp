#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Ingrese el tamano del arreglo ";
    cin >> n1;
    int numero[n1];
    int a = 0;

    for (int i = 0; i < n1; i++)
    {
        int num1;
        cout << "Introduzca los numeros impares " << i + 1 << "\n";
        cin >> num1;
        if (num1 % 2 == 1)
        {
            numero[a] = num1;
            a++;
        }
    }
    cout << "Los numeros impares de los numeros ingresados son ";
    for (int i = 0; i < a; i++)
    {
        cout<<numero[i]<<" ";
    }
    cout << "\n";

    return 0;
}