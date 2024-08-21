/*Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com a tabela*/

#include <iostream>

using namespace std;

void qualcategoria(int idade){
    int categoria;
    if(idade < 5){
        cout << "A categoria do nadador e: Sem Categoria" << endl;
    }
    else if(idade <= 8){
        cout << "A categoria do nadador e: Infantil A" << endl;
    }
    else if(idade <= 10){
         cout << "A categoria do nadador e: Infantil B" << endl;
    }
    else if(idade <= 13){
        cout << "A categoria do nadador e: Juvenil A" << endl;
    }
    else if(idade <= 17){
        cout << "A categoria do nadador e: Juvenil B" << endl;
    }
    else{
        cout << "A categoria do nadador e: Adulto" << endl;
    }
}

int main()
{
    int idade;
    cout << "Informe a idade do nadador: ";
    cin >> idade;
    qualcategoria(idade);
    return 0;
}
