/*Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b"*/

#include <iostream>

using namespace std;

int quantosanos(){
    int anos = 0;
    int populacaoA = 90000000;
    int populacaoB = 200000000;
    while (populacaoB > populacaoA){
        populacaoA += populacaoA * 0.03;
        populacaoB += populacaoB * 0.015;
        anos++;
    }
    return anos;
}

int main()
{
    int anos;
    anos = quantosanos();
    cout << "Populacao de a sera maior b em " << anos << " anos" << endl;
    return 0;
}
