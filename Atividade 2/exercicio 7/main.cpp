/*Faça uma função que recebe a idade de uma pessoa em anos, meses e dias.
Retorna essa  idade expressa em dias.*/


#include <iostream>

using namespace std;

int quantosdias(int anos, int meses, int dias){
    int diastotais;
    diastotais = anos * 365 + meses * 30 + dias;

    return diastotais;
}

int main()
{
    int anos, meses, dias, diastotais;
    cout << "Informe quantos anos a pessoa tem: ";
    cin >> anos;
    cout << "Informe quantos meses a pessoa tem: ";
    cin >> meses;
    cout << "Informe quantos dias a pessoa tem: ";
    cin >> dias;
    diastotais = quantosdias(anos, meses, dias);
    cout << endl;
    cout << "Valor total de dias: " << diastotais << endl;
    return 0;
}
