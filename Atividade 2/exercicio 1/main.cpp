/*Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome, que faça a leitura dos dados e os apresente em seguida na tela. O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres. */

#include <iostream>

using namespace std;

struct aluno{
    char nome[100];
    char matricula[100];
};

int main()
{
    aluno vetoraluno[50];
    int i;
    for(i = 0;i < 50; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(vetoraluno[i].nome, sizeof(vetoraluno[i].nome));
        cout << "Informe a matricula do aluno: ";
        cin.getline(vetoraluno[i].matricula, sizeof(vetoraluno[i].matricula));
    }
    cout << endl;
    for(i = 0;i < 50; i++){
        cout << "Nome do aluno: " << vetoraluno[i].nome << endl;
        cout << "Matricula do aluno: " << vetoraluno[i].matricula << endl;
        cout << endl;
    }

    return 0;
}
