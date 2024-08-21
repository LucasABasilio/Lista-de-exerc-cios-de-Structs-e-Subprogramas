/*Construir um programa que na função main leia 3 valores informados pelo usuário.
Utilizar uma função para retornar o maior deles.
A função main deve  imprimir o resultado.*/

#include <iostream>

using namespace std;

double maior(double numero[3]){
    double numeromaior;
    if(numero[0] >= numero[1] && numero[0] >= numero[2]){
        numeromaior = numero[0];
    }
    else if(numero[1] >= numero[0] && numero[1] >= numero[2]){
        numeromaior = numero[1];
    }
    else{
        numeromaior = numero[2];
    }
    return numeromaior;
}

int main()
{
    double numero[3], maiornumero;
    int i;
    for(i = 0; i < 3; i++){
        cout << "Informe o " << i+1 << " valor: ";
        cin >> numero[i];
    }
    cout << endl;
    maiornumero = maior(numero);
    cout << "O maior valor e: " << maiornumero << endl;
    return 0;
}
