/*Construir um programa que calcule.
Apresente o resultado da convers�o de 0 a 100  graus Fahrenheit para graus Celsius.
O c�lculo dessa convers�o deve ficar isolado em  uma fun��o estar de acordo com a seguinte f�rmula: C=5/9.(F-32)*/

#include <iostream>

using namespace std;

double conversao(double F){
    double C;
    C = 5 / 9.0 * (F - 32);
    return C;
}

int main()
{
    double F, C;
    int i;
    for(i = 0; i <= 100; i++){
        F = i;
        C = conversao(F);
        cout << F << " Fahrenheit e igual a: " << C << " Celsius" << endl;
    }
    return 0;
}
