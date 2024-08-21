/*Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7. */


#include <iostream>
#include <string.h>

using namespace std;

double calculopesoideal(char sexo[20], double altura){
    double pesoideal;
    if(stricmp(sexo, "Homem") == 0){
        pesoideal = 72.7 * altura - 58;
    }
    else{
        pesoideal = 62.1 * altura - 44;
    }

    return pesoideal;
}


int main()
{
    double altura, pesoideal;
    char sexo[20];
    cout << "Informe a altura: ";
    cin >> altura;
    cout << "Informe o sexo (Homem ou Mulher): ";
    fflush(stdin);
    cin.getline(sexo, sizeof(sexo));

    while(1){
        if(stricmp(sexo, "Homem") == 0){
            break;
        }
        else if(stricmp(sexo, "Mulher") == 0){
            break;
        }
        else{
            cout << "Deve ser utilizado apenas Homem ou Mulher." << endl;
            cout << "Informe o sexo (Homem ou Mulher): ";
            fflush(stdin);
            cin.getline(sexo, sizeof(sexo));
        }
    }
    pesoideal = calculopesoideal(sexo, altura);
    cout << endl;
    cout << "peso ideal e: " << pesoideal << endl;
    return 0;
}
